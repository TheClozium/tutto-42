/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:34:38 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:53:53 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int			isalpha(int c);
int			isdigit(int k);
int			ft_is_alnum(int k);
int			ft_is_ascii(int k);
int			ft_strlen(char *str);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dest, char *src, unsigned int size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
int			ft_toupper(int k);
int			ft_tolower(int k);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int i);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
void		*memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(char *str);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *src);

#endif
