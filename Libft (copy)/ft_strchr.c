/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:43:07 by socloza           #+#    #+#             */
/*   Updated: 2023/11/05 20:30:38 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
int	main()
char *s = "Hello, world!";
char *c = ft_strchr(s, 'o'); 
// Find the first occurrence of the character 'o' in the string 's'

if (c != NULL) {
  printf("The character 'o' is found at index %d.\n", c - s); 
  // Print the index of the character 'o'
} else {
  printf("The character 'o' is not found in the string.\n");
}
*/
