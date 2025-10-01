#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *s, int c, size_t n);
int ft_atoi(const char *nptr);

void ft_putchar(char c);
void ft_putstr(char const *s);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
