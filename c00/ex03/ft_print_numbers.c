/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:23:47 by socloza           #+#    #+#             */
/*   Updated: 2023/09/05 21:39:19 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	boh;

	boh = '0';
	while (boh <= '9')
	{
		write (1, &boh, 1);
		write (1, '\n', 2);
		boh++;
	}
}

int	main()
{
	ft_print_numbers();
}
