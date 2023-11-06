/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:05:40 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 16:59:26 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		str = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	const char *prima_stringa = "Hey, cazzo guardi!";
    unsigned int start_index = 5;
    size_t substring_length = 5;

    char *result = ft_substr(prima_stringa, start_index, substring_length);

    if (result != NULL) 
	{
        printf("stringa originale: %s\n", prima_stringa);
        printf("sottostringa estratta: %s\n", result);
    } else 
	{
        printf("fai cagare.\n");
    }
    return 0;
}*/
