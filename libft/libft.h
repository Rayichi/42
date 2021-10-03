#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int         ft_atoi(char *str);
void        *ft_calloc(size_t num, size_t size);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
void        *ft_memccpy(void *dest, const void *src, int c, size_t n);
void       *ft_memchr(void *ptr, int value, size_t num);
void        *ft_memcpy(void *destination, const void *source, size_t num);
void        *ft_memmove(void *dest, const void *src, size_t num);
void        *ft_memset( void * ptr, int value, size_t num );
char        *ft_strdup(char *str);
int         ft_strlcpy(char *dest, char *src, size_t num);
size_t      ft_strlen(char *str);
int         ft_strncmp(char *s1, char *s2, int n);
char        *ft_strnstr(char *str, char *to_find, int n);
char        *ft_strrchr(char *str, int c);
char        *ft_strchr(char *str, int c);

#endif