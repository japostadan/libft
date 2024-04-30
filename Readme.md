# Libft - @42Born2Code ![banner](./img/cover-libft-bonus.png)
# CONTENTS ![logo](./img/libftn.png)
- [What is libft?](#what-is-libft)
- [Project Overview](#project-overview)
- [List of functions](#list-of-functions)
- [List of bonus functions](#bonus-funcitons)

# What is libft? [](#what-is-libft)
![icon](./img/libfte.png)
Libft is an individual project at [42](https://www.42barcelona.com/) that requires us to re-create some standard C library functions for future projects, and have a deeper understanding of data structures and basic algorithms. At [42](https://www.42barcelona.com/) we are not allowed to use some standard libraries on our projects, so we have to keep growing this libary with our own functions as we go farther in the program.

# Project Overview [](#project-overview)

This project involves recreating a set of functions from the libc library. The goal is to replicate the behavior of the original functions while adhering to specific guidelines.

Instructions

	1.	Function Replication: Redo the functions from the libc library with the same prototypes and behaviors. However, prefix each function with ‘ft_’ (e.g., strlen becomes ft_strlen).
	2.	Compliance: Ensure that your functions comply with the definitions provided in their respective man pages.
	3.	Restrict Qualifier: Some function prototypes may use the ‘restrict’ qualifier, which is part of the c99 standard. Do not include this qualifier in your own prototypes, and refrain from compiling your code with the ‘-std=c99’ flag.
	4.	Implementation: Write your own functions to replicate the behavior of the following originals. No external functions are required:

```!Note
  Feel free to adjust the instructions and details as needed for your specific project. DO NOT COPY What you don't understand!!
```

# List of functions [](#list-of-functions)

| Libc functions            |      Additional functions       |           Bonus Functions           |        Personal Functions |     |
| :------------------------ | :-----------------------------: | :---------------------------------: | ------------------------: | --- |
| [ft_isalpha](#ft_isalpha) |     [ft_substr](#ft_substr)     |       [ft_lstnew](#ft_lstnew)       | [ft_islower](#ft_islower) |     |
| [ft_isdigit](#ft_isdigit) |    [ft_strjoin](#ft_strjoin)    | [ft_lstadd_front](#ft_lstadd_front) | [ft_isupper](#ft_isupper) |     |
| [ft_isalnum](#ft_isalnum) |    [ft_strtrim](#ft_strjoin)    |      [ft_lstsize](#ft_lstsize)      | [ft_isspace](#ft_isspace) |     |
| [ft_isascii](#ft_isascii) |      [ft_split](#ft_split)      |      [ft_lstlast](#ft_lstlast)      | [ft_strndup](#ft_strndup) |     |
| [ft_isprint](#ft_isprint) |       [ft_itoa](#ft_itoa)       |  [ft_lstadd_back](#ft_lstadd_back)  | [ft_strcdup](#ft_strcdup) |     |
| [ft_strlen](#ft_strlen)   |    [ft_strmapi](#ft_strmapi)    |    [ft_lstdelone](#ft_lstdelone)    |                           |     |
| [ft_memset](#ft_memset)   |   [ft_striteri](#ft_striteri)   |     [ft_lstclear](#ft_lstclear)     |                           |     |
| [ft_bzero](#ft_bzero)     | [ft_putchar_fd](#ft_putchar_fd) |      [ft_lstiter](#ft_lstiter)      |                           |     |
| [ft_memcpy](#ft_memcpy)   |  [ft_putstr_fd](#ft_putstr_fd)  |       [ft_lstmap](#ft_lstmap)       |                           |     |
| [ft_memmove](#ft_memmove) | [ft_putendl_fd](#ft_putendl_fd) |                                     |                           |     |
| [ft_strlcpy](#ft_strlcpy) |  [ft_putnbr_fd](#ft_putnbr_fd)  |                                     |                           |     |
| [ft_strcat](#ft_strcat)   |                                 |                                     |                           |     |
| [ft_toupper](#ft_toupper) |                                 |                                     |                           |     |
| [ft_tolower](#ft_tolower) |                                 |                                     |                           |     |
| [ft_strchr](#ft_strchr)   |                                 |                                     |                           |     |
| [ft_strrchr](#ft_strrchr) |                                 |                                     |                           |     |
| [ft_strncmp](#ft_strncmp) |                                 |                                     |                           |     |
| [ft_memchr](#ft_memchr)   |                                 |                                     |                           |     |
| [ft_memcmp](#ft_memcmp)   |                                 |                                     |                           |     |
| [ft_strnstr](#ft_strnstr) |                                 |                                     |                           |     |
| [ft_atoi](##ft_atoi)      |                                 |                                     |                           |     |
| [ft_calloc](#ft_calloc)   |                                 |                                     |                           |     |
| [ft_strdup](#ft_strdup)   |                                 |                                     |                           |     |

## [ft_isalpha](ft_isalpha.c)

```C
int ft_isalpha(int c)
```

|                                                     Description                                                     |        Param. #1         |                           Return Value                           |
| :-----------------------------------------------------------------------------------------------------------------: | :----------------------: | :--------------------------------------------------------------: |
| Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | c: The character to test | 0 if the character tests false and 1 if the character tests true |

## [ft_isdigit](ft_isdigit.c)

```C
 int ft_isdigit(int c)
```

|           Description           |        Param. #1         |                           Return Value                           |
| :-----------------------------: | :----------------------: | :--------------------------------------------------------------: |
| Check for a digit (0 through 9) | c: The character to test | 0 if the character tests false and 1 if the character tests true |

## [ft_isalnum](ft_isalnum.c)

```C
int ft_isalnum(int c)
```

|                                                    Description                                                    |       Param. #1       |                           Return Value                           |
| :---------------------------------------------------------------------------------------------------------------: | :-------------------: | :--------------------------------------------------------------: |
| Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit)) | The character to test | 0 if the character tests false and 1 if the character tests true |

## [ft_isascii](ft_isascii.c)

```C
int ft_isascii(int c)
```

|                                       Description                                        |       Param. #1       |                           Return Value                           |
| :--------------------------------------------------------------------------------------: | :-------------------: | :--------------------------------------------------------------: |
| Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true |

## [ft_isprint](ft_isprint.c)

```C
int        ft_isprint(int c)
```

|                    Description                     |       Param. #1       |                           Return Value                           |
| :------------------------------------------------: | :-------------------: | :--------------------------------------------------------------: |
| Checks for any printable character including space | The character to test | 0 if the character tests false and 1 if the character tests true |
## [ft_strlen](ft_strlen.c)

```C
size_t ft_strlen(const char *s)
```

|                                           Description                                           |        Param. #1        |                   Return Values                    |
| :---------------------------------------------------------------------------------------------: | :---------------------: | :------------------------------------------------: |
| Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0') | The string to calculate | Number of characters in the string pointed to by s |

## [ft_memset](ft_memset.c)[](##memset)

```C
void *ft_memset(void *s, int c, size_t len)
```

|                  Description                   |           Param. #1            |                Param. #2                |      Param. #3      |          Return Value          |
| :--------------------------------------------: | :----------------------------: | :-------------------------------------: | :-----------------: | :----------------------------: |
| Fill with "len" bytes of "c" the memory of "s" | The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s |

## [ft_bzero](ft_bzero.c)

```C
void *ft_bzero(void *s,  size_t n)
```

|                                              Description                                              |           Param. #1            |      Param. #2      | Return Value |
| :---------------------------------------------------------------------------------------------------: | :----------------------------: | :-----------------: | :----------: |
| Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes |     None     |

## [ft_memcpy](ft_memcpy.c)

```C
void *ft_memcpy(void *dst, const void *src, size_t n)
```

|                                                                      Description                                                                       |    Param. #1    |    Param. #2    |      Param. #3      |           Return Value           |
| :----------------------------------------------------------------------------------------------------------------------------------------------------: | :-------------: | :-------------: | :-----------------: | :------------------------------: |
| Copies n bytes from memory area src to memory of dst. The memory areas must not overlap. Use [ft_memmove](#ft_memmove) if the memory areas do overlap. | Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst |

## [ft_memmove](ft_memmove.c)

```C
void *ft_memmove(void *dst, const void *src, size_t len)
```

|                                                                   Description                                                                    |    Param. #1    |    Param. #2    |      Param. #3      |           Return Value           |
| :----------------------------------------------------------------------------------------------------------------------------------------------: | :-------------: | :-------------: | :-----------------: | :------------------------------: |
| Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst. | Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst |

## [ft_strlcpy](ft_strlcpy.c)

```C
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
```

|                                                Description                                                |     Param. #1     |      Param. #2      |                 Param. #3                  |                     Return Value                     |
| :-------------------------------------------------------------------------------------------------------: | :---------------: | :-----------------: | :----------------------------------------: | :--------------------------------------------------: |
| Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result | Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src) |

## [ft_strlcat](ft_strlcat.c)

```C
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
```

|                  Description                  |     Param. #1     |      Param. #2      |                 Param. #3                  |                     Return Value                     |
| :-------------------------------------------: | :---------------: | :-----------------: | :----------------------------------------: | :--------------------------------------------------: |
| Concatenate from source to dst until the size | Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src) |

## [ft_toupper](ft_toupper.c)

```C
int ft_toupper(int c)
```

|                               Description                               |        Param. #1         |                                      Return Value                                      |
| :---------------------------------------------------------------------: | :----------------------: | :------------------------------------------------------------------------------------: |
| If the character passed as an argument is a lowercase, convert to upper | The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise, it returns c. |

## [ft_tolower](ft_tolower.c)

```C
int ft_tolower(int c)
```

|                               Description                                |        Param. #1         |                                      Return Value                                      |
| :----------------------------------------------------------------------: | :----------------------: | :------------------------------------------------------------------------------------: |
| If the character passed as an argument is an uppercase, convert to lower | The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise, it returns c. |

## [ft_strchr](ft_strchr.c)

```C
char *ft_strchr(const char *s, int c)
```

|                                                                                            Description                                                                                             |     Param. #1     |        Param. #2        |                                               Return Value                                               |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :---------------: | :---------------------: | :------------------------------------------------------------------------------------------------------: |
| Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0' | Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found |

## [ft_strrchr](ft_strrchr.c)

```C
char *ft_strrchr(const char *s, int c)
```

|                                                                                            Description                                                                                            |     Param. #1     |        Param. #2        |                                              Return Value                                               |
| :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :---------------: | :---------------------: | :-----------------------------------------------------------------------------------------------------: |
| Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0' | Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found |

## [ft_memchr](ft_memchr.c)

```C
void *ft_memchr(const void *s, int c, size_t n)
```

|                        Description                         |   Param. #1   |       Param. #2       |      Param. #3      |                                          Return Value                                           |
| :--------------------------------------------------------: | :-----------: | :-------------------: | :-----------------: | :---------------------------------------------------------------------------------------------: |
| Scans the initial n bytes of s for the first instance of c | Memory area s | A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area |

## [ft_memcmp](ft_memcmp.c)

```C
void *ft_memcmp(void *dst, const void *src, size_t n)
```

|                  Description                   |   Param. #1    |   Param. #2    |      Param. #3      |                                   Return Value                                    |
| :--------------------------------------------: | :------------: | :------------: | :-----------------: | :-------------------------------------------------------------------------------: |
| Compares byte string s1 against byte string s2 | Memory area s1 | Memory area s2 | The number of bytes | < 0 if s1 is less than s2, > 0 if s1 is graeter than s2, = 0 if s1 is equal to s2 |

## [ft_strdup](ft_strdup.c)

`char       *ft_strdup(const char *s))`

|                                            Description                                             |        Param. #1        |                                 Return Values                                 |
| :------------------------------------------------------------------------------------------------: | :---------------------: | :---------------------------------------------------------------------------: |
| Duplicate string s1. Memory for the new string is obtained with malloc, and can be freed with free | The string to duplicate | A pointer to the duplicated string. NULL if insufficient memory was available |

## [ft_strnstr](ft_strnstr.c)

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

|                                                                                               Description                                                                                               |      Param. #1       |                      Param. #2                       |                    Param. #3                    |                                                                                Return Value                                                                                |
| :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :------------------: | :--------------------------------------------------: | :---------------------------------------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in the string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string | The maximum amount of characters to be searched | A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned |

## [ft_atoi](ft_atoi.c)

`int        ft_atoi(const char *str)`

|          Description          |             Param. #1             |    Return Value     |
| :---------------------------: | :-------------------------------: | :-----------------: |
| Convert a string to a integer | The string to be converted to int | The converted value |

## [ft_calloc](ft_calloc.c)

`void       *ft_calloc(size_t count, size_t size)`

|                                                                                     Description                                                                                     |             Param. #1              |    Param. #2     |                          Return Value                           |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------: | :--------------: | :-------------------------------------------------------------: |
| Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails |

## [ft_substr](ft_substr.c)

`char   *ft_substr(char const *s, unsigned int start, size_t len)`

|                                                                      Description                                                                      |                 Param. #1                  |                   Param. #2                    |              Param. #3              |                Return Value                 |
| :---------------------------------------------------------------------------------------------------------------------------------------------------: | :----------------------------------------: | :--------------------------------------------: | :---------------------------------: | :-----------------------------------------: |
| Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len' | The string from which create the substring | The start index of the substring in the string | The maximum length of the substring | The substring. NULL if the allocation fails |

## [ft_strjoin](ft_strjoin.c)

`char *ft_strjoin(char const *s1, char const *s2)`

|                                        Description                                         |     Param. #1     |     Param. #2     |                 Return Value                 |
| :----------------------------------------------------------------------------------------: | :---------------: | :---------------: | :------------------------------------------: |
| Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 | The prefix string | The suffix string | The new string. NULL if the allocation fails |

## [ft_strtrim](ft_strtrim.c)

`char *ft_strjoin(char const *s1, char const *s2)`

|                                                                                Description                                                                                 |        Param. #1         |               Param. #2                |                   Return Value                   |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :----------------------: | :------------------------------------: | :----------------------------------------------: |
| Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string | The string to be trimmed | The reference set of character to trim | The trimmed string. NULL if the allocation fails |

## [ft_strsplit](ft_split.c)

`char **ft_split(char const *s, char c)`

|                                                                            Description                                                                            |       Param. #1        |        Param. #2        |                                Return Value                                |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------: | :---------------------: | :------------------------------------------------------------------------: |
| Allocates (with malloc) and returns an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer | The string to be split | The delimiter character | The array of new strings result of the split. NULL if the allocation fails |

## [ft_strmapi](ft_strmapi.c)

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

|                                                                        Description                                                                        |           Param. #1            |                Param. #2                |                                          Return Value                                          |
| :-------------------------------------------------------------------------------------------------------------------------------------------------------: | :----------------------------: | :-------------------------------------: | :--------------------------------------------------------------------------------------------: |
| Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications off | The string on which to iterate | The function to apply to each character | The string created from the successive applications of f. Returns NULL if the allocation fails |

## [ft_itoa](ft_itoa.c)

`char   ft_itoa(int n)`

|                                                           Description                                                           |       Param. #1        |                            Return Value                            |
| :-----------------------------------------------------------------------------------------------------------------------------: | :--------------------: | :----------------------------------------------------------------: |
| Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert | The string representing the integer. NULL if the allocation fails. |

# Bonus Funcitons [](#bonus-funcitons)
![icon](./img/libftm.png)

#### [ft_lstnew](ft_lstnew.c)

```C
t_list	*ft_lstnew(void *content)
```

|                                                                                           Description                                                                                           |                  Param. #1                   | Return Value |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :------------------------------------------: | :----------: |
| Allocates (with malloc(3)) and returns a new node.<br>The member variable ’content’ is initialized with<br>the value of the parameter ’content’. The variable<br>’next’ is initialized to NULL. | content: The content to create the node with | The new node |



#### [ft_lstadd_front](ft_lstadd_front.c)

```C
void ft_lstadd_front(t_list **lst, t_list *new)
```

|                    Description                    |                                                              Description                                                               | Return Value |
| :-----------------------------------------------: | :------------------------------------------------------------------------------------------------------------------------------------: | :----------: |
| Adds the node ’new’ at the beginning of the list. | lst: The address of a pointer to the first link of<br>a list.<br>new: The address of a pointer to the node to be<br>added to the list. |     none     |

#### [ft_lstsize](ft_lstsize.c)

```C
int ft_lstsize(t_list *lst)
```

|             Description              |           Param. #1            |      Return Value      |
| :----------------------------------: | :----------------------------: | :--------------------: |
| Counts the number of nodes in a list | lst: The beginning of the list | The length of the list |

#### [ft_lstlast](ft_lstlast.c)

```C
t_list	*ft_lstlast(t_list *lst)
```

|            Description            |           Param. #1            |     Return Value      |
| :-------------------------------: | :----------------------------: | :-------------------: |
| Returns the last node of the list | lst: The beginning of the list | Last node of the list |

#### [ft_lstadd_back](ft_lstadd_back.c)

```C
void	ft_lstadd_back(t_list **lst, t_list *new)
```

|                 Description                 |                                                               Param. #1                                                                | Return Value |
| :-----------------------------------------: | :------------------------------------------------------------------------------------------------------------------------------------: | :----------: |
| Adds the node ’new’ at the end of the list. | lst: The address of a pointer to the first link of<br>a list.<br>new: The address of a pointer to the node to be<br>added to the list. |     none     |

#### [ft_lstdelone](ft_lstdelone.c)

```C
void	ft_lstdelone(t_list *lst, void (*del)(void *))
```

|                                                                                       Description                                                                                        |                                                      Param. #2                                                       | Return Value |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------------------------------------------------: | :----------: |
| Takes as a parameter a node and frees the memory of<br>the node’s content using the function ’del’ given<br>as a parameter and free the node. The memory of<br>’next’ must not be freed. | lst: The address of the pointer to a node<br>del: The address of the function used to delete the content of the node |     none     |

#### [ft_lstclear](ft_lstclear.c)

```C
	void	ft_lstclear(t_list **lst, void (*del)(void *))
```

|                                                                                Description                                                                                 |                                                        Param. #2                                                        | Return Value |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :---------------------------------------------------------------------------------------------------------------------: | :----------: |
| Deletes and frees the given node and every<br>successor of that node, using the function ’del’<br>and free(3).<br>Finally, the pointer to the list must be set to<br>NULL. | lst: The address of a pointer to a node.<br>del: The address of the function used to delete<br>the content of the node. |     none     |

#### [ft_lstiter](ft_lstiter.c)

```C
	void	ft_lstiter(t_list *lst, void (*f)(void *))
```

|                                     Description                                      |                                                 Param. #2                                                  | Return Value |
| :----------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------: | :----------: |
| Iterates the list ’lst’ and applies the function<br>’f’ on the content of each node. | lst: The address of a pointer to a node.<br>f: The address of the function used to iterate on<br>the list. |     none     |

#### [ft_lstmap](ft_lstmap.c)

```C
	t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
```

|                                                                                                                      Description                                                                                                                     |                                                                                             Param. #3                                                                                             |                  Return Value                  |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------: |
| Iterates the list ’lst’ and applies the function<br>’f’ on the content of each node. Creates a new<br>list resulting of the successive applications of<br>the function ’f’. The ’del’ function is used to<br>delete the content of a node if needed. | lst: The address of a pointer to a node.<br>f: The address of the function used to iterate on<br>the list.<br>del: The address of the function used to delete<br>the content of a node if needed. | The new list.<br>NULL if the allocation fails. |

