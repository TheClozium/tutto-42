/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:36:22 by socloza           #+#    #+#             */
/*   Updated: 2023/10/18 13:36:26 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int	i;
	int	j = 0;
	i = 1;
	if (argc == 2)
	{
	while (i < 3)
	while (argv[i][j])
		j++;
	j--;
	while (argv[i][j] <= 32)
		j--;
	while (argv[i][j] > 32)
		j--;
	j++;
	while (argv[i][j] > 32)
		write (1, &argv[i][j++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
		
