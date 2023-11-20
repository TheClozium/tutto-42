/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:22:54 by socloza           #+#    #+#             */
/*   Updated: 2023/10/19 16:36:07 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{	
	char	*src2;
	int	i;
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	src2 = (char *)malloc(sizeof(*src2) * (j + 1);
	if (src2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		src[i] = src2[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

