/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:00:08 by socloza           #+#    #+#             */
/*   Updated: 2023/10/19 18:14:06 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	tab[256] = {0};
	int	j;
	int	i = 1;

	if (argc == 3)
	{
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (tab[(int)argv[i][j]] == 0)
				{
					tab[(int)argv[i][j]] = 1;
					write (1, &argv[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
