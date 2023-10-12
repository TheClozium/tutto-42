/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:53:37 by socloza           #+#    #+#             */
/*   Updated: 2023/09/28 18:37:10 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if ((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))
		{
			if (str[k] == 'z' || str[k] == 'Z')
				str[k] -= 26;
			str[k] += 1;
		}
		write (1, &str[k], 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	//rotone(argv[1]);
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	write (1, "\n", 1);
}
/*	while (argv[1][j] != '\0')
	{
		write (1, &argv[1][j], 1);
		j++;
	}
	write (1, "\n", 1);
	return (0);
}*/
