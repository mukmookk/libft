/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 03:43:24 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 10:25:13 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void		*ft_memset(void *s, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void 		*ft_memchr(const void *s, int c, size_t );
int			ft_memcmp(const void *s1, const void *s2, size_t n);

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char 		*ft_strcpy(char *dst, const char *src);		#####
char		*ft_strncpy(char *dst, const char *src, size_t len); ###
char		*ft_strcat(char *dest, char *src);			#####
char		*ft_strncat(char *dest, char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);	#####
char		*ft_strnstr(const char* haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			atoi(const char *str);
int			isalpha(int c);

int			ft_isdigit(int c);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
#endif






