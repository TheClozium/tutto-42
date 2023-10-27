/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:23:12 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:56:39 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	k;
	int	segno;
	int	risultato;

	k = 0;
	while ((str[k] >= 9 && str[k] <= 13) || (str[k] == 32))
	{
		k++;
	}
	segno = 1;
	while (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			segno *= -1;
		k++;
	}
	risultato = 0;
	while (str[k] >= 48 && str[k] <= 57)
	{
		risultato = risultato * 10 + (str[k] - 48);
		k++;
	}
	return (risultato * segno);
}
/*
int	main()
{
	char	s[] = "---135565";
	printf("%d\n", ft_atoi(s));
}*/
