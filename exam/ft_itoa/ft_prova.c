/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prova.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:16:20 by socloza           #+#    #+#             */
/*   Updated: 2023/10/25 12:20:17 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	len(int nb)
{
	int	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int	i;
	long	n;
	char	*str;

	n = nb;
	i = len(n);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	i--;
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(-1578432));
}

