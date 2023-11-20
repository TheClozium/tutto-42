/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnumb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:13:48 by socloza           #+#    #+#             */
/*   Updated: 2023/10/12 17:21:06 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar("-");
		nbl = -nbl;
	}
	c = (nbl % 10) + '0';
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
	}
	ft_putchar(c);
}

int	main()
{
	int	num;

	num = -1345432;
	ft_putnbr(num);
	ft_putchar('\n');
	return (0);
}

