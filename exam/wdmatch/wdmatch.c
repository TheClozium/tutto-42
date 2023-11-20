/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:55:07 by socloza           #+#    #+#             */
/*   Updated: 2023/10/18 13:01:33 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
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
	int	i;
	int	k;
	
	if (argc == 3)
	{
		i = 0;
		k = 0;
		while (argv[2][k])
		{
			if (argv[2][k] == argv[1][i])
			{
				i++;
				if (!argv[1][i])
				{
					ft_putstr(argv[1]);
					break;
				}
			}
			k++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
