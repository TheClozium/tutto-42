/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prova.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:36:49 by socloza           #+#    #+#             */
/*   Updated: 2023/10/25 13:40:28 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] <= 'm')
				str += 13;
			else
				str -= 13;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] <= 'M')
				str += 13;
			else
				str -= 13;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rot_13(argv[1]);
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
