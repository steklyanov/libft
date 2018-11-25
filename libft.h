/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:33:23 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/24 14:38:27 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *b, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *source, int c, size_t n);
void    *ft_memmove(void *dist, const void *src, size_t len);
void    *ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t	ft_strlen(const char *str);
char    *ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *source, size_t n);
char    *ft_strcat(char *destination, const char *append);
char	*ft_strncat(char *dest, const char *append, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t n);
char    *ft_strchr(const char *str, int ch);
char    *ft_strstr(const char *str1, const char *str2);

#endif
