/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:02:00 by socloza           #+#    #+#             */
/*   Updated: 2023/09/07 13:12:56 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	p;

	p = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
