/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:04:02 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 17:28:36 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
	{
		return (0);
	}
	else
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
}
