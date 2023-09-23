/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:57:38 by socloza           #+#    #+#             */
/*   Updated: 2023/09/18 12:03:09 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	bruv;
	char	c[10];
	int		i;

	bruv = nb;
	i = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (bruv < 0)
	{
		bruv *= -1;
		write (1, "-", 1);
	}
	while (bruv)
	{
		c[i++] = (bruv % 10) + 48;
		bruv /= 10;
	}
	while (i > 0)
	{
		write (1, &c[--i], 1);
	}
}
/*
int	main()
{
	ft_putnbr (2147483647);
	write (1, "\n", 1);
}*/
