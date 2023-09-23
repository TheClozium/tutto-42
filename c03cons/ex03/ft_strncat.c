/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:12:25 by socloza           #+#    #+#             */
/*   Updated: 2023/09/13 13:21:52 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pissy;
	unsigned int	vagyna;

	pissy = 0;
	vagyna = 0;
	while (dest[pissy] != '\0')
	{
		pissy++;
	}
	while (vagyna < nb && src[vagyna] != '\0')
	{
		dest[pissy + vagyna] = src[vagyna];
		vagyna++;
	}
	dest[pissy + vagyna] = '\0';
	return (dest);
}
