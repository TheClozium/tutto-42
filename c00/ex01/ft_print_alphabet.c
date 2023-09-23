/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:11:16 by socloza           #+#    #+#             */
/*   Updated: 2023/09/05 21:15:21 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	pippo;

	pippo = 'a';
	while (pippo <= 'z')
	{
		write (1, &pippo, 1);
		pippo++;
	}
}

/*
int	main()
{
	ft_print_alphabet();
}*/
