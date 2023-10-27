/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:02:16 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:20:05 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int i)
{
	const char	*last;

	last = NULL;
	if (i != '\0')
	{
		while (*s)
		{
			if (*s == i)
			{
				last = s;
				s++;
			}
		}
		if (*last == i)
		{
			return ((char *)last);
		}
		else
		{
			return ((char *)s + strlen(s));
		}
		return (NULL);
	}
}
