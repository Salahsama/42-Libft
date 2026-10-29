*This project has been created as part of the 42 curriculum by **esalah-e**.*

# Libft

## Description

Libft is my first C library. The goal is to rewrite some standard libc functions from scratch. Everything ends up in a static library, `libft.a`, that I can reuse in my later projects.

The library contain three parts:

**Libc functions** :
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

**Additional functions:**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Linked list functions** (using the `t_list` struct from `libft.h`):
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

No global variables are used, and helper functions are `static`. The library is built with `ar`.

## Instructions

Build the library:

```
make
```

This creates `libft.a` at the root of the repo. Other rules:

```
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean make libft.a again
```

To use it in your own program, include the header and link the library:

```c
#include "libft.h"
```

```
cc -Wall -Wextra -Werror main.c -L. -lft -o test
```

Everything is compiled with `cc -Wall -Wextra -Werror`.

## Resources

- `man` pages for each libc function (`man strlen`, etc.)
- Peer discussions with other students at school

**How Ai was used:**
- Understanding new consepts.