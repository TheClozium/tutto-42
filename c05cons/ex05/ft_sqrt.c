/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:31:12 by socloza           #+#    #+#             */
/*   Updated: 2023/09/24 16:48:26 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	k;
	long	squarer;

	k = nb;
	if (k <= 0)
	{
		return (0);
	}
	if (k == 1)
	{
		return (1);
	}
	squarer = 2;
	if (k >= 2)
	{
		while (squarer * squarer <= k)
		{
			if (squarer * squarer == k)
			{
				return (squarer);
			}
			squarer++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    int number = 123
   ; 
    int result = ft_sqrt(number);

    if (result != 0) {
        printf("La radice quadrata di %d e' %d\n", number, result);
    } else {
        printf("%d non funziona testa a pinolo\n", number);
    }

    return 0;
}*/
