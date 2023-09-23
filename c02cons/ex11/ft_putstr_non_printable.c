/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:57:09 by socloza           #+#    #+#             */
/*   Updated: 2023/09/11 14:03:40 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 32 && str[j] <= 126)
		{
			write (1, &str[j], 1);
		}
		else
		{
			write (1, "\\", 1);
			str[j] += 32;
		}
		j++;
	}
}

/*
void ft_putstr_non_printable(char *str);

int main() {
    char string[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(string);

    return 0;
}*/
