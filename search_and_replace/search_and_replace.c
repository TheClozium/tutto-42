/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:34:52 by socloza           #+#    #+#             */
/*   Updated: 2023/10/12 16:26:48 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
    write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
void	search_and_replace(char *str, char find, char replace)

{
	while (*str)
	{
		if (*str == find)
		{
			ft_putchar(replace);
		}
		else
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	search_and_replace (argv[1], argv[2][0], argv[3][0]);
	ft_putchar ('\n');
	return (0);
}
