/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:32:26 by socloza           #+#    #+#             */
/*   Updated: 2023/09/14 13:38:31 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	s;

	a = 0;
	s = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[s] != '\0')
	{
		dest[a] = src[s];
		a++;
		s++;
	}
	return (dest);
}
