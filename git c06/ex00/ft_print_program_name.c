/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:41:18 by socloza           #+#    #+#             */
/*   Updated: 2023/09/26 12:46:14 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;

	k = 0;
	while (argv[0][k] != '\0')
	{
		if (argc < 2)
		{
			write (1, &argv[0][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
