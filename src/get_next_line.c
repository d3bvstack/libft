/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:35 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/04/09 09:24:05 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*process_storage(int fd, char **storage);
static char	*extract_line(char *newline, char **storage);
static int	fill_storage(int fd, char **storage);
static char	*handle_remaining(char **storage);

/// @brief Declares static buffer, checks valid starting params and calls logic.
/// @param fd File descriptor from which to get next line.
/// @return If successful: Next line.
///			If unsuccessful or EOF reached: NULL.
char	*get_next_line(int fd)
{
	static char	*storage[MAX_FD];

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	return (process_storage(fd, &storage[fd]));
}

/// @brief Checks if newline present in storage and inits corresponding logic.
/// @param fd File descriptor from which to read if no newline in storage.
/// @param storage Static buffer that saves everything that has benn read.
/// @return On success: Return next line
///			On bytes_read <= 0: Frees everything and returns NULL
static char	*process_storage(int fd, char **storage)
{
	char	*newline_ch;
	long	read_bytes;

	while (1)
	{
		newline_ch = ft_strchr(*storage, '\n');
		if (newline_ch)
			return (extract_line(newline_ch, storage));
		read_bytes = fill_storage(fd, storage);
		if (read_bytes <= 0)
			return (handle_remaining(storage));
	}
}

/// @brief From the storage gets the first line \n included & updates storage.
/// @param newline Pointer to the position of the first \n inside the storage.
/// @param storage Address of the storage.
/// @return If successful: A string with \n.
///			If unsuccessful (prbly failed malloc): NULL.
static char	*extract_line(char *newline, char **storage)
{
	char	*line;
	char	*new_storage;

	line = ft_substr(*storage, 0, (newline - *storage) + 1);
	if (!line)
	{
		ft_free(storage, NULL);
		return (NULL);
	}
	if (*(newline + 1) == '\0')
		new_storage = NULL;
	else
	{
		new_storage = ft_strdup(newline + 1);
		if (!new_storage)
		{
			free(line);
			ft_free(storage, NULL);
			return (NULL);
		}
	}
	ft_free(storage, new_storage);
	return (line);
}

/// @brief Fill storage by reading into a new_storage copy.
/// @param fd File descriptor from which to read.
/// @param storage Pointer to the string with read characters
/// @return Number of bytes read by read().
static int	fill_storage(int fd, char **storage)
{
	char	*new_storage;
	size_t	strg_len;
	long	read_bytes;

	strg_len = ft_strlen(*storage);
	new_storage = ft_calloc(sizeof(char), strg_len + BUFFER_SIZE + 1);
	if (!new_storage)
	{
		ft_free(storage, NULL);
		return (-1);
	}
	if (*storage)
		ft_strlcpy(new_storage, *storage, strg_len + 1);
	read_bytes = read(fd, new_storage + strg_len, BUFFER_SIZE);
	if (read_bytes < 0)
	{
		free(new_storage);
		new_storage = NULL;
	}
	ft_free(storage, new_storage);
	return (read_bytes);
}

/// @brief Handle EOF or read() == -1.
/// @param storage Remaining characters still in the buffer.
/// @return If storage exists: Return line with remaining.
///			If storage doesn't exists propper: Return NULL.
static char	*handle_remaining(char **storage)
{
	char	*line;

	if (*storage && **storage)
	{
		line = ft_strdup(*storage);
		ft_free(storage, NULL);
		return (line);
	}
	ft_free(storage, NULL);
	return (NULL);
}
