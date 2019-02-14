#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

int     ft_atoi(char const *str);
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memalloc(size_t size);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const  void *s2, size_t n);
void    *ft_memcpy(void *dest, void const *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, int size);
void    ft_putchar(char c);
void    ft_putstr(char const *str);
char	*ft_strcat(char *dest, char *src);
char    *ft_strchr(char *src, char a);
void	ft_strclr(char *s);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dest, char *src);
int	ft_strlen(char const *str);
int     ft_strequ(char const *s1, char const *s2);
void    ft_striter(char *s, void (*f)(char *));
int     ft_strlcat(char *dest, char *src, int size);
char    *ft_strncat(char *dest, char *src, int i);
int     ft_strncmp(char *s1, char *s2, int len);
char	*ft_strncpy(char *dest, char *src, int i);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strnew(size_t size);
char    *ft_strnstr(char *stack, char *niddle, int len);
char    *ft_strrchr(char *src, char a);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strstr(char *stack, char *needle);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif
