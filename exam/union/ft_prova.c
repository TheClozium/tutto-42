/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prova.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:48:17 by socloza           #+#    #+#             */
/*   Updated: 2023/10/25 13:51:13 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int	tab[256] = {0};
	int	i = 1;
	int	j = 0;
	if (argc == 3)
	{
		while (i < 3)
		{
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

