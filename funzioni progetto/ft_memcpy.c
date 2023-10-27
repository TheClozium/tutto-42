/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:22:05 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:19:49 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Tua mamma!";
    char destination[20];  // Destination buffer

    // Copy 13 bytes from source to destination
    memcpy(destination, source, 10);

    // Ensure the destination is null-terminated to treat it as a string
    destination[10] = '\0';

    printf("Copied string: %s\n", destination);

    return 0;
}*/
