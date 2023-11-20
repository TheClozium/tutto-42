/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alphas.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:18:01 by socloza           #+#    #+#             */
/*   Updated: 2023/10/23 19:23:04 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat(char c)
{
	int	repeat;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
	       repeat = c - 'A' + 1;
	else
	repeat = 1;
	return (repeat);
}	

int	main(int argc, char **argv)
{
	int	ripetizione;
	if (argc == 2)
	{
		while (*argv[1])
		{
			ripetizione = repeat(*argv[1]);
			while (ripetizione--)
			{
				write (1, argv[1], 1);
			}
			argv[1]++;
		}
		write (1, "\n", 1);
	}
	return (0);
}

