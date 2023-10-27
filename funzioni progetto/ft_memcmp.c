/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:02:00 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:19:48 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*uno;
	char	*due;

	uno = (char *)s1;
	due = (char *)s2;
	while (*due == *uno && 0 < n)
	{
		due++;
		uno++;
		n--;
	}
	return (*uno - *due);
}
