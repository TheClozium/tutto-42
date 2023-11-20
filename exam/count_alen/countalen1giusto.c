/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countalen1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:19:29 by socloza           #+#    #+#             */
/*   Updated: 2023/09/28 16:23:35 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	countalen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return(j);
}

int	main(int argc, char **argv)
{
	int	k;
	int	cont;
	int	i;

	k = countalen(argv[cont]);
	i = 0;
	cont = 1;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[cont][i] != '\0')
	{
		if (argv[cont][i] == 'a')
		{
			write (1, "\n", 1);
			return (0);
		}
		write (1, &argv[cont][i], 1);
		i++;
	}
	cont++;
	return (0);
}
