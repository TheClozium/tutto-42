/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:39:27 by socloza           #+#    #+#             */
/*   Updated: 2023/10/24 17:25:16 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	count_words(char *str)
{
	int	counter = 0;

	while (*str)
	{
		while (*str && ft_isspace(*str))
		{
			str++;
		}
		if (*str && !ft_isspace(*str))
		{
			counter++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (counter);
}

char	*malloc_word(char *str)
{
	int	i = 0;
	char	*word;

	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	i = 0;
	char	**array;

	array = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			array[i] = malloc_word(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}

int	main()
{
	char	**arr;

	char	phrase[] = "	Hello,     Flavio\t CAccamro! jir  ";
	arr = ft_split(phrase);

	if (arr == NULL)
	{
		printf("fai cagare\n");
		return (1);
	}

	int	i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free (arr);
	return (0);
}
