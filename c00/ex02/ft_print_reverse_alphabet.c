/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:19:23 by socloza           #+#    #+#             */
/*   Updated: 2023/09/05 21:21:26 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	mauro;

	mauro = 'z';
	while (mauro >= 'a')
	{
		write (1, &mauro, 1);
		mauro--;
	}
}
/*
int	main()
{
	ft_print_reverse_alphabet();
}*/
