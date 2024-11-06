# 🛠️ Libft - Custom C Library for 42 Lisboa

This is my implementation of Libft, the first project in the 42 curriculum where I developed my very own C library. Through this project, I recreated essential C functions and added custom utilities, building a toolkit that will support my future projects.

## 📑 Table of Contents
1. [About the Project](#-about-the-project)
2. [Requirements](#-requirements)
3. [Function Overview](#-function-overview)
4. [Bonus Part](#-bonus-part)
5. [Installation](#-installation)
6. [Usage](#-usage)
7. [Makefile Commands](#-makefile-commands)

---

## ℹ️ About the Project

Libft is my custom library that includes functions for memory handling, string manipulation, and more. I created each function to follow the same behavior as standard library functions. Building this library helped me gain a deeper understanding of C fundamentals and memory management.

---

## ⚙️ Requirements

- **Language:** C
- **Compiler:** `cc`
- **Flags:** `-Wall -Wextra -Werror`
- **Project Structure:** All files at root of repository
- **Norm Compliance:** Code follows 42's coding norms (except main.c, take a look at it and you'll know why :D)
- **Memory Management:** No memory leaks allowed
- **No Global Variables:** Global variables are forbidden

---

## 📋 Function Overview

### 🔹 Part 1: Standard Library Functions

In this part, I re-created essential C library functions. Here’s a list of these mandatory functions, with links to each implementation:

- **Character Checks**
  - [`ft_isalpha`](./ft_isalpha.c) ➜ Checks if character is alphabetic
  - [`ft_isdigit`](./ft_isdigit.c) ➜ Checks if character is a digit
  - [`ft_isalnum`](./ft_isalnum.c) ➜ Checks if character is alphanumeric
  - [`ft_isascii`](./ft_isascii.c) ➜ Checks if character is ASCII
  - [`ft_isprint`](./ft_isprint.c) ➜ Checks if character is printable

- **String Operations**
  - [`ft_strlen`](./ft_strlen.c) ➜ Returns the length of a string
  - [`ft_strlcpy`](./ft_strlcpy.c) ➜ Copies a string to a buffer
  - [`ft_strlcat`](./ft_strlcat.c) ➜ Concatenates two strings with size limit
  - [`ft_strchr`](./ft_strchr.c) ➜ Finds first occurrence of a character in a string
  - [`ft_strrchr`](./ft_strrchr.c) ➜ Finds last occurrence of a character in a string
  - [`ft_strncmp`](./ft_strncmp.c) ➜ Compares two strings up to `n` characters
  - [`ft_strnstr`](./ft_strnstr.c) ➜ Locates a substring in a string
  - [`ft_strdup`](./ft_strdup.c) ➜ Duplicates a string

- **Memory Operations**
  - [`ft_memset`](./ft_memset.c) ➜ Fills a block of memory
  - [`ft_bzero`](./ft_bzero.c) ➜ Zeros out a block of memory
  - [`ft_memcpy`](./ft_memcpy.c) ➜ Copies memory area
  - [`ft_memmove`](./ft_memmove.c) ➜ Moves memory area
  - [`ft_memchr`](./ft_memchr.c) ➜ Scans memory for a character
  - [`ft_memcmp`](./ft_memcmp.c) ➜ Compares two memory areas

- **Character Conversion**
  - [`ft_toupper`](./ft_toupper.c) ➜ Converts character to uppercase
  - [`ft_tolower`](./ft_tolower.c) ➜ Converts character to lowercase

- **Utilities**
  - [`ft_atoi`](./ft_atoi.c) ➜ Converts string to integer
  - [`ft_calloc`](./ft_calloc.c) ➜ Allocates zeroed memory for an array
  - [`ft_itoa`](./ft_itoa.c) ➜ Converts integer to string

### 🔹 Part 2: Additional Functions

These are my custom utilities that add even more functionality to Libft.

- [`ft_substr`](./ft_substr.c) ➜ Extracts a substring from a string
- [`ft_strjoin`](./ft_strjoin.c) ➜ Concatenates two strings
- [`ft_strtrim`](./ft_strtrim.c) ➜ Trims specified characters from the start and end of a string
- [`ft_split`](./ft_split.c) ➜ Splits a string based on a delimiter
- [`ft_strmapi`](./ft_strmapi.c) ➜ Applies a function to each character in a string
- [`ft_striteri`](./ft_striteri.c) ➜ Iterates over a string and modifies it with a function
- [`ft_putchar_fd`](./ft_putchar_fd.c) ➜ Writes a character to a file descriptor
- [`ft_putstr_fd`](./ft_putstr_fd.c) ➜ Writes a string to a file descriptor
- [`ft_putendl_fd`](./ft_putendl_fd.c) ➜ Writes a string with a newline to a file descriptor
- [`ft_putnbr_fd`](./ft_putnbr_fd.c) ➜ Writes an integer to a file descriptor

---

## 🌟 Bonus Part

The bonus part introduces linked lists, allowing for more advanced data management. Here’s what I added for the bonus:

- [`ft_lstnew`](./ft_lstnew.c) ➜ Creates a new list node
- [`ft_lstadd_front`](./ft_lstadd_front.c) ➜ Adds a node at the beginning of a list
- [`ft_lstsize`](./ft_lstsize.c) ➜ Returns the number of nodes in a list
- [`ft_lstlast`](./ft_lstlast.c) ➜ Returns the last node of the list
- [`ft_lstadd_back`](./ft_lstadd_back.c) ➜ Adds a node at the end of a list
- [`ft_lstdelone`](./ft_lstdelone.c) ➜ Frees a single node
- [`ft_lstclear`](./ft_lstclear.c) ➜ Clears and frees all nodes in a list
- [`ft_lstiter`](./ft_lstiter.c) ➜ Iterates over a list and applies a function to each node
- [`ft_lstmap`](./ft_lstmap.c) ➜ Maps a function onto a list and returns a new list

---

## 📥 Installation

Clone the repository and navigate to the directory:

```bash
git clone https://github.com/pvcordeiro/libft.git
cd libft
```

Compile the library:

```bash
make
```

---

## 🚀 Usage

After compiling, include `libft.h` in your project:

```c
#include "libft.h"

// Example usage
int main() {
    char *str = "Hello, world!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

And link `libft.a` on compilation:

```bash
cc filename.c libft.a -o output_name
```
---

## 📝 Makefile Commands

- `make` ➜ Compile the library
- `make clean` ➜ Remove object files
- `make fclean` ➜ Remove object files and `libft.a`
- `make re` ➜ Recompile the library
- `make bonus` ➜ Compile the bonus part
- `make test` ➜ Compile with the test main.c and test the functions

---

This project is a great milestone in my journey through 42 School, and I’m excited to keep building on top of it!
