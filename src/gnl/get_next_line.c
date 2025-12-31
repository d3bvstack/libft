/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:35 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:44:52 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * @brief Extract a line from storage up to and including the newline character.
 *
 * Copies characters from the start of storage up to and including the first
 * newline character. Updates storage to remove the extracted line.
 *
 * @param newline Pointer to the newline character in storage.
 * @param storage Pointer to the buffer containing read data.
 * @return Pointer to the extracted line, or NULL on allocation failure.
 */
static char	*extract_line(char *newline, char **storage)
{
	char	*line;
	char	*new_storage;

	line = ft_substr(*storage, 0, (newline - *storage) + 1);
	if (!line)
	{
		ft_free((void *)storage, NULL);
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
			ft_free((void *)storage, NULL);
			return (NULL);
		}
	}
	ft_free((void *)storage, new_storage);
	return (line);
}

/**
 * @brief Read from a file descriptor and append data to storage.
 *
 * Allocates a new buffer, copies existing storage, and reads up to BUFFER_SIZE
 * bytes from the file descriptor. Updates storage with the new data.
 *
 * @param fd File descriptor to read from.
 * @param storage Pointer to the string containing previously read characters.
 * @return Number of bytes read, or -1 on allocation or read error.
 */
static int	fill_storage(int fd, char **storage)
{
	char	*new_storage;
	size_t	strg_len;
	long	read_bytes;

	strg_len = ft_strlen(*storage);
	new_storage = ft_calloc(sizeof(char), strg_len + BUFFER_SIZE + 1);
	if (!new_storage)
	{
		ft_free((void *)storage, NULL);
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
	free(*storage);
	*storage = new_storage;
	return (read_bytes);
}

/**
 * @brief Handle end-of-file or read error by returning remaining storage.
 *
 * If storage contains data, duplicates and returns it. Frees storage in all
 * cases.
 *
 * @param storage Pointer to buffer containing any remaining characters.
 * @return Pointer to the remaining content, or NULL if empty or on error.
 */
static char	*handle_remaining(char **storage)
{
	char	*line;

	if (*storage && **storage)
	{
		line = ft_strdup(*storage);
		ft_free((void *)storage, NULL);
		return (line);
	}
	ft_free((void *)storage, NULL);
	return (NULL);
}

/**
 * @brief Process storage to extract the next line or read more data if needed.
 *
 * Searches for a newline in storage. If not found, reads more data and repeats.
 * Returns the next line or NULL if end-of-file or error occurs.
 *
 * @param fd File descriptor to read from if newline not found in storage.
 * @param storage Pointer to buffer containing previously read data.
 * @return Pointer to the next line, or NULL if EOF reached or on error.
 */
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

/**
 * @brief Read and return the next line from a file descriptor.
 *
 * Returns a line of text from the file descriptor, including the newline
 * character if present. Returns NULL on error or when end-of-file is reached.
 *
 * @param fd File descriptor to read from.
 * @return Pointer to the next line, or NULL on error or end-of-file.
 */
char	*get_next_line(int fd)
{
	static char	*storage[MAX_FD];

	if (fd == -1)
		clean_storage(storage);
	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	return (process_storage(fd, &storage[fd]));
}
