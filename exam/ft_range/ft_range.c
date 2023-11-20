/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:02:16 by socloza           #+#    #+#             */
/*   Updated: 2023/10/17 17:10:02 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}

	t = (int *)malloc(sizeof(*t) * (max - min));
	i = 0;
	if (t == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
/*
int		main(void)
{
	int		i;
	int		*tab;
	
	i = 0;
	tab = ft_range(-1, 3);
	while (i < 4)	
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/

