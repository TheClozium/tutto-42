/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:11:55 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:20:03 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	k;
	size_t	j;

	j = 0;
	k = 0;
	if (little[k] == '\0')
	{
		return ((char *)big);
	}
	while (big[j] != '\0' && j < len)
	{
		while (big[j + k] == little[k] && j + k < len)
		{
			k++;
			if (little[k] == '\0')
			{
				return ((char *)&big[j]);
			}
		}
		j++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    const char *big = "bifrhj huejovmwkv'.";
    const char *little = "bifrhj";
    size_t len = 20; // Maximum length to search within big.

    char *result = ft_strnstr(big, little, len);

    if (result != NULL)
    {
        printf("Substring found: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}*/
