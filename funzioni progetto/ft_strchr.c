/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:43:07 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:19:55 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	j;

	j = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		if (s[j] == (char)c)
		{
			return ((char *)&s[j]);
		}
		j++;
	}
	return (NULL);
}
