/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/22 01:28:57 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

/* -------------------------------- First part -------------------------------*/

void *	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void *	ft_memcpy(void *s1, const void *s2, size_t n); /* (fix 096d2cd1f62c) */
void *	ft_memccpy(void *s1, const void *s2, int c, size_t n);
void *	ft_memmove(void *s1, const void *s2, size_t n);
void *	ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
char *	ft_strdup(const char *s1);
char *	ft_strcpy(char *s1, const char *s2);
char *	ft_strncpy(char *s1, const char *s2, size_t n);
char *	ft_strcat(char *s1, const char *s2);
char *	ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char *	ft_strchr(const char *s, int c);
char *	ft_strrchr(const char *s, int c);
char *	ft_strstr(const char *s1, const char *s2); /* Requires strncmp > ok */
char *	ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/* -------------------------------- Second part ------------------------------*/

void *	ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char *	ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char *	ft_strmap(char const *s, char (*f)(char));
char *	ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char *	ft_strsub(char const *s, unsigned int start, size_t len);
char *	ft_strjoin(char const *s1, char const *s2);


/* --------------------------- User specific functions -----------------------*/

int		ft_islower(int c); /* user */
int		ft_isupper(int c); /* user */
int		ft_isblank(int c); /* user */

#endif /* !LIBFT_H */
