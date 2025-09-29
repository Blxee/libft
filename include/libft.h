#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_toupper(int c);
int ft_tolower(int c);

void ft_putchar(char c);
void ft_putstr(char const *s);

#endif
