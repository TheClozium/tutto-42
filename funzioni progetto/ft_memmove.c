/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:47:06 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:19:51 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*dt;
	size_t	i;

	s = (char *)src;
	dt = (char *)dest;
	i = 0;
	if (s < dt)
	{
		while (n-- > 0)
		{
			dt[n] = s[n];
		}
		if (s > dt)
		{
			while (n > 0)
			{
				dt[i] = s[i];
				i++;
			}
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copy 'Hello, ' from source to destination
    ft_memmove(destination, source, 7);

    printf("Copied: %s\n", destination);

    // Now let's test overlapping regions
    ft_memmove(source + 7, source, 7);

    printf("After overlapping copy: %s\n", source);

    return 0;
}*/
