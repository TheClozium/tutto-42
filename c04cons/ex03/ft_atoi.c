/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:23:12 by socloza           #+#    #+#             */
/*   Updated: 2023/09/18 14:29:21 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	numero;
	int	segni;

	segni = 0;
	numero = 0;
	while ((*str > 8 && *str <= 13) || (*str == 32))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			segni++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		numero *= 10;
		numero += *str - 48;
		++str;
	}
	if (!(segni % 2))
		return (numero);
	return (-numero);
}
/*
int main()
{
	char	*s = "    ---+--+1234ab567";

	printf("%d\n",ft_atoi(s));	
}*/
