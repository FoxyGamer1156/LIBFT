/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:21:28 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:21:30 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t count, size_t len);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char	*str, const char *null_find, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

#endif