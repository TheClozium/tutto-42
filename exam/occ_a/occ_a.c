/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:13:47 by socloza           #+#    #+#             */
/*   Updated: 2023/10/18 12:16:05 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	occ_a(char *str)
{
	int	i;
	int	counter = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
		{
			counter++;
		}
		i++;
	}
	return (counter);
}
