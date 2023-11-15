/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:46:41 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:26:25 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int k)
{
	if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z')
		|| (k >= '0' && k <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	int	num = '#';
	printf("%d\n", ft_isalnum(num));
}*/
