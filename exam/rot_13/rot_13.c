/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:01:46 by socloza           #+#    #+#             */
/*   Updated: 2023/09/22 00:01:48 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			if (str[k] <= 'm')
				str[k] += 13;
			else
				str[k] -= 13;
		}
		if (str[k] >= 'A' && str[k] <= 'Z')
		{
			if (str[k] <= 'M')
				str[k] += 13;
			else
				str[k] -= 13;
		}
		k++;
	}
}

int	main (int argc, char **argv)
{
	int	j;

	if (argc == 2)
	{
		rot_13(argv[1]);
		j = 0;
		while (argv[1][j] != '\0')
		{
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);		
}
