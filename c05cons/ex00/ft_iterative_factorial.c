/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:19:21 by socloza           #+#    #+#             */
/*   Updated: 2023/09/19 22:22:31 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	calcolo;

	calcolo = 1;
	while (nb > 0)
	{
		calcolo *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (calcolo);
}
