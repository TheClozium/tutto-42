/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:09:29 by socloza           #+#    #+#             */
/*   Updated: 2023/09/28 19:17:51 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	k;
	int	j;
	char	*src2;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	src2 = (char *)malloc(sizeof(char)* k);
	j = 0;
	while (src[j] != '\0')
	{
		src2[j] = src[j];
		j++;
	}
	src2[j] = '\0';
	return(src2);
}

int	main()
{
	printf("%s", ft_strdup("ciao merde"));
}

