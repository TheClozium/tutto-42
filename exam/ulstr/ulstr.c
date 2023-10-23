/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:05:28 by socloza           #+#    #+#             */
/*   Updated: 2023/10/12 17:12:04 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 'a' + 'A');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] - 'A' + 'a');
		else
			ft_putchar(str[i]);
				i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
