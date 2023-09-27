/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:50:18 by socloza           #+#    #+#             */
/*   Updated: 2023/09/20 12:54:02 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
*/
int	main(int argc, char **argv)
{
	int	i;
	int	l;

	i = 1;
	while (i < argc)
	{
		l = 0;
		while (argv[i][l] != '\0')
		{
			write (1, &argv[i][l], 1);
			l++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
