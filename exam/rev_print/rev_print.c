/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:02:43 by socloza           #+#    #+#             */
/*   Updated: 2023/10/12 16:08:28 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
