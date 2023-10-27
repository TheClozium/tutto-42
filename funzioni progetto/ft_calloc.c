/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:47 by socloza           #+#    #+#             */
/*   Updated: 2023/10/11 17:20:15 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*ptr;
	unsigned int			k;

	k = (nmemb * size);
	if ((ptr = malloc(k)) == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, k);
	return (ptr);
}
