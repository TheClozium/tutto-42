/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:27:58 by socloza           #+#    #+#             */
/*   Updated: 2023/09/23 22:38:51 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	calcolo;

	calcolo = 1;
	if (nb > 0)
	{
		calcolo = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (calcolo);
}
