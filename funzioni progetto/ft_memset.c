/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:35:33 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:19:53 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	unsigned char	value;

	pointer = (unsigned char *)s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*pointer = value;
		pointer++;
		n--;
	}
	return (s);
}
