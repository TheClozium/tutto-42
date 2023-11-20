/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:30:38 by socloza           #+#    #+#             */
/*   Updated: 2023/10/17 16:36:04 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	int	tab[256] = {0};

	if (argc == 3)
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				if (tab[(int)argv[2][j]] == 0)
				{
					tab[(int)argv[2][j]] = 1;
					write (1, &argv[1][i], 1);
				}
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
