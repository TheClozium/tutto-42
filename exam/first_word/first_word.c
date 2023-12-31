/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:38:12 by socloza           #+#    #+#             */
/*   Updated: 2023/09/28 17:50:27 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;

	k = 0;
	if (argc == 2)
	{
		while (argv[1][k] == ' ' || argv[1][k] == 9)
			k++;
		while (argv[1][k] != '\0' && argv[1][k] != '\t' && argv[1][k] != 32)
		{
			write (1, &argv[1][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
