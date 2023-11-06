/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:47 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 17:27:32 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*{
	char			*ptr;
	unsigned int			k;

	k = (nmemb * size);
	if ((ptr = malloc(k)) == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, k);
	return (ptr);
}*/
