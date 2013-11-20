/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 09:16:33 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_FT_H__
# define __FT_FT_H__

#include <stdlib.h>
#include <string.h>

void*	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	strlcat(char *dst, const char *src, size_t size);


/*
void	*memccpy(void *restrict s1, const void *restrict s2, int c, size_t n);
void	*memmove(void *s1, const void *s2, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strstr(const char *s1, const char *s2);
char	*strnstr(const char *s1, const char *s2, size_t n);
int		strcmp(const char *s1, const char *s2);
int		strncmp(const char *s1, const char *s2, size_t n);

int		atoi(const char *str);

int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);
*/
#endif
