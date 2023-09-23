/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:29:15 by socloza           #+#    #+#             */
/*   Updated: 2023/09/10 21:29:42 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] += 32;
		}
		j++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "Hello, World!";
    printf("String prima della conversione: %s\n", str);

    ft_strupcase(str);

    printf("String dopo la conversione: %s\n", str);

    return 0;
}*/
