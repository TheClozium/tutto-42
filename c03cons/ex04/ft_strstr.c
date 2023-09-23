/* ************************************************************************** */
/*                                               k                             */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:28:36 by socloza           #+#    #+#             */
/*   Updated: 2023/09/13 14:34:30 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	q;
	int	w;

	q = 0;
	w = 0;
	if (to_find[w] == '\0')
		return (str);
	while (str[q] != '\0')
	{
		while (str[q + w] == to_find[w] && str[q + w] != '\0')
			w++;
		if (to_find[w] == '\0')
			return (str + q);
		q++;
		w = 0;
	}
	return (0);
}

int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "";
	printf("%s", ft_strstr(str, find));
}
