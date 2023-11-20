/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:29:23 by socloza           #+#    #+#             */
/*   Updated: 2023/10/17 17:36:11 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	*t;

	if (start > end)
	t = (int *)malloc(sizeof(*t) * (start - end + 1));
	else
	t = (int *)malloc(sizeof(*t) * (end - start + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	while (start != end)
	{
		t[i] = start;
		i++;
		if (start > end)
			start--;
		else
			start++;
	}
	t[i] = end;
	return (t);
}
int		main(void)
{
	int		i;
	int		*tab;
	
	i = 0;
	tab = ft_range(5, -2);
	while (i < 8)	
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}
