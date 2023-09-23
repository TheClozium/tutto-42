/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scloza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:25:22 by scloza            #+#    #+#             */
/*   Updated: 2023/05/14 16:48:09 by scloza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	char	n;

	if (c < 10)
	{
		n = c + 48;
		write (1, "0", 1);
		write (1, &n, 1);
		return ;
	}
	n = (c / 10) + 48;
	write (1, &n, 1);
	n = (c % 10) + 48;
	write (1, &n, 1);
}

void	ft_print_comb2(void)

{
	short	puttana[3];

	puttana[1] = 0;
	while (puttana[1] < 99)
	{
		puttana[2] = puttana[1] + 1;
		while (puttana[2] < 100)
		{
			ft_putchar(puttana[1]);
			write(1, " ", 1);
			ft_putchar(puttana[2]);
			if (puttana[1] == 98 && puttana[2] == 99)
				write (1, ".\n", 2);
			else
				write (1, ", ", 2);
			puttana[2]++;
		}
		puttana[1]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
