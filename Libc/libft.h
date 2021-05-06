/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mook <mook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:24:37 by mook              #+#    #+#             */
/*   Updated: 2021/05/06 23:43:03 by mook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef __LIBFT_H__
#define __LIBFT_H__

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*********************************************************************************
									* lib c funtions *
 * *******************************************************************************/

/* In this first part, you must re-code a set of the libc functions, as defined in their man. 
Your functions will need to present the same prototype and behaviors as the orig- inals. 
Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.*/

void		*ft_memset(void *s, int c, size_t len)
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void 		*ft_memchr(const void *s, int c, size_t );
int			ft_memcmp(const void *s1, const void *s2, size_t n);

size_t		ft_strlen(cosnt char *s);
//##########################progress bar########################################/
// • strdup 
// char *strdup(const char *s1);
// • strcpy 
// char *strcpy(char *dst, cosnt char *src, size_t len);


// • strncpy 
// char *strncpy(char *dst, cosnt char *src, size_t len);
// • strcat 
// char *strcat(char *restrict s1, char *restrict s2);
// • strncat 
// char *strncat(char *restrict s1, char *restrict s2, size_t n);
// • strlcat 
// size_t strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
// • strchr 
// char *strchr(const char *s, int c);
// • strrchr 
// char *strrchr(const char *s, int c);

// • strstr
// char *strstr(const char *haystack, const char *needle);
// • strnstr 
// char *strnstr(cosnt char* haystack, const char *needle, size_t len);
// • strcmp 
// int strcmp(const char *s1, cosnt char *s2);
// • strncmp 
// int strncmp(const char *s1, const char *s1, size_t n);
// • atoi
// int atoi(const char *str);

// • isalpha
// int isalpha(int c);
// • isdigit
// int isdigit(int c);
// • isalnum
// int isalnum(int c);
// • isascii
// int isascii(int c);
// • isprint
// int isprint(int c);
// • toupper
// int toupper(int c);
// • tolower
// int tolower(int c);
#endif






