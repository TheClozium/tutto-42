/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prova.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:59:51 by socloza           #+#    #+#             */
/*   Updated: 2023/10/25 13:02:36 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pustr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	k = 0;
	if (argc == 3)
	{
		while (argv[2][k])
		{
			if (argv[2][k] == argv[1][i])
			{
				i++;
				if (!argv[1][i])
				{
					ft_pustr(argv[1]);
					break;
				}
			}
			k++;
		}
	}
	write (1, &argv[1][i], 1);
	return (0);
}
