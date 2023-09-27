/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scloza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:01:23 by scloza            #+#    #+#             */
/*   Updated: 2023/05/13 14:29:27 by scloza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

char	rettangolo(int base, int altezza, int x, int y)
{
	if ((base == 0 && altezza == 0) || (base == x - 1 && altezza == y - 1))
	{
		if ((y == 1 && base > 1) || (x == 1 && altezza > 1))
		{
			return ('C');
		}
		return ('A');
	}
	if ((base == x - 1 && altezza == 0) || (base == 0 && altezza == y - 1))
	{
		return ('C');
	}
	if ((base == 0) || (altezza == 0) || (base == x - 1) || (altezza == y - 1))
	{
		return ('B');
	}	
	return (' ');
}

void	rush(int x, int y)
{
	int	base;
	int	altezza;

	altezza = 0;
	while (altezza < y)
	{
		base = 0;
		while (base < x)
		{
			ft_putchar(rettangolo(base, altezza, x, y));
			base++;
		}
		ft_putchar('\n');
		altezza++;
	}
}

/*int	main(void)
{
	rush04 (4, 4);
	return (0);
}*/
