# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarba-v <dbarba-v@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 13:30:50 by dbarba-v          #+#    #+#              #
#    Updated: 2025/04/13 10:00:04 by dbarba-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJDIR = objs

# Sources
SRC_FILES = src/ft_atoi.c \
			src/ft_atol.c \
			src/ft_bzero.c \
			src/ft_calloc.c \
			src/ft_free_all.c \
			src/ft_free_array2d.c \
			src/ft_free_array.c \
			src/ft_free.c \
			src/ft_isalnum.c \
			src/ft_isalpha.c \
			src/ft_isascii.c \
			src/ft_isdigit.c \
			src/ft_isprint.c \
			src/ft_issing.c \
			src/ft_isspace.c \
			src/ft_itoa.c \
			src/ft_memchr.c \
			src/ft_memcmp.c \
			src/ft_memmove.c \
			src/ft_memset.c \
			src/ft_putchar_fd.c \
			src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c \
			src/ft_putstr_fd.c \
			src/ft_split.c \
			src/ft_strchr.c \
			src/ft_strcmp.c \
			src/ft_strdup.c \
			src/ft_striteri.c \
			src/ft_strjoin.c \
			src/ft_strjoin_three.c \
			src/ft_strlcat.c \
			src/ft_strlcpy.c \
			src/ft_strlen.c \
			src/ft_strmapi.c \
			src/ft_strncmp.c \
			src/ft_strnstr.c \
			src/ft_strrchr.c \
			src/ft_strtrim.c \
			src/ft_substr.c \
			src/ft_tolower.c \
			src/ft_toupper.c \
			src/get_next_line.c \

SRC = $(SRC_FILES)

# Objects
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

# Headers location
INCLUDES = ./include/

# Rules
# target : dependencies
# all -> Standard make target
# NAME -> Name of outfile
all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)/src

# Each .o has as dependency a same name .c 
$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

# Target program (libft.a) has as dependencies the OBJS
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# clean doesn't have dependencies, it just executes command
clean:
	$(RM) -r $(OBJDIR)

# fclean executes first clean as it has it as dependency
fclean: clean
	$(RM) $(NAME)

# re executes fclean and then re-make all
re: fclean all

.PHONY: all clean fclean re $(OBJDIR)
