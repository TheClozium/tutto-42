/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interval_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:28:34 by socloza           #+#    #+#             */
/*   Updated: 2023/09/27 11:32:22 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	counter;

	counter = 0;
	i = 1;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[i][counter] != '\0')
	{
		if (argv[i][counter] == 'o')
		{
			write (1, "\n", 1);
			return (0);
		}
		write (1, &argv[i][counter], 1);
		if (argv[i][counter+1] != '\0')
		{
			write (1, " ", 1);
			write (1, " ", 1);
			write (1, " ", 1);
		}
		counter++;
	}
	return (0);
}
