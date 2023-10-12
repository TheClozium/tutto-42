/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:10:00 by socloza           #+#    #+#             */
/*   Updated: 2023/09/28 17:16:28 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_index(char c)
{
	int	i;

	i = 0;
	char	alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	if ('A' >= c && c <= 'Z')
		c += 32;
	while (i < 26)
	{
		if (alphabet[i] == c)
			return(i);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	index = 0;
	int 	i = 0;
	int	j = 0;
	
	if(argc != 2)
	{
		write (1, "\n", 1);
	}

	while (argv[1][i] != '\0')
	{
		if ((65 <= argv[1][i] && argv[1][i] <= 90) || (97 <= argv[1][i] && argv[1][i] <= 122))
		{
			index = find_index(argv[1][i]);
			 j = 0;
			 while (j <= index)
			 {
				 write (1, &argv[1][i], 1);
				 j++;
			 }
		}
		else
		{
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	
	write (1, "\n", 1);
	
	return (0);
}

