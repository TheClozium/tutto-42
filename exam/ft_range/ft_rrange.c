/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hruo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:29:52 by socloza           #+#    #+#             */
/*   Updated: 2023/10/18 13:30:23 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	if (rrange == NULL)
		return (NULL);
	while (start != end)
	{
		rrange[i] = end;
		i++;
		if (start > end)
			end++;
		else
			end--;
			
		//end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}

int		main(void)
{
	int		i;
	int		*tab;

	i = 0;
	tab = ft_rrange(1, 3);
	while (i < 3)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}
