<img alt="libft cover image" src="https://github.com/user-attachments/assets/093650cd-2927-4d88-a1c6-55c666fdb6bb" />

# libft

## What is this?

`libft` is a hands-on C learning project from [42 School](https://www.42network.org/). The idea is to re-create some of C standard library functions from scratch in order to understand the foundations of C programming. Every function here is my own implementation, meant to be reused across future C projects in my learning journey.

This isn't designed as bulletproof, production-grade code. Instead, by working through all the tough bits (and making my share of mistakes), I now trust my C fundamentals. Plus, I’ve got a toolbox I understand inside and out.

## What’s inside?

- **String functions:** `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strncmp`, `ft_strcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, etc.
- **Memory functions:** `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_calloc`, etc.
- **Character checks/conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isprint`, `ft_isalnum`, `ft_isascii`, `ft_toupper`, `ft_tolower`, ...
- **Numeric/string conversion:** `ft_atoi` (ASCII to int), `ft_itoa` (int to ASCII), ...
- **Split/join functions:** `ft_split` (split a string by delimiter), `ft_strjoin` (concatenate strings), ...
- **List utilities:** Simple linked list operations, like `ft_lstnew`, `ft_lstadd_back`, `ft_lstdelone`, etc.
- **Output helpers:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`, ...
- **Other handy stuff:**  Small helper functions to round out the basics.

## What did I learn?

- How to track down and fix segmentation faults and pointer mistakes.
- What pointers actually do (and what happens if you get them *wrong*).
- How memory allocation works in order to manage memory propperly, avoiding both leaks and overflows.
- The value of modularizing code and organizing functions logically.
- How propper organization can make a codebase far more readable, maintainable and debuggable.

## How do you use this library?

You'll need any C compiler and `make` installed. Just run the following inside the libft/ directory:

```sh
make
```

### Resulting files

- The static library archive will be located at: `libft/lib/libft.a`
- The header for all declarations will be found at: `libft/include/libft.h`

### Example with gcc

Suppose you have a file named `main.c`:

```c name=main.c
#include "libft.h"

int main(void) {
    char *s = "Hello World!";
    int len = ft_strlen(s);

    ft_putnbr_fd(len, 1);
    ft_putchar_fd('\n', 1);
    return 0;
}
```

Compile with:

```sh
gcc -Ilibft/include main.c -Llibft/lib -lft
```

Or using Makefile, you might set it up like:

```makefile name=Makefile
NAME = main
SRCS = main.c
LIBFTDIR = libft
LIB = $(LIBFTDIR)/lib/libft.a
INC = -I$(LIBFTDIR)/include

$(NAME): $(SRCS)
	make -C $(LIBFTDIR)
	gcc $(SRCS) $(INC) -L$(LIBFTDIR)/lib -lft -o $(NAME)

clean:
	make -C $(LIBFTDIR) clean
	rm -f $(NAME)

fclean: clean
	make -C $(LIBFTDIR) fclean

re: fclean $(NAME)
```

And that's it.
