/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:56:05 by socloza           #+#    #+#             */
/*   Updated: 2023/10/19 19:58:04 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i]) 
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{	
				argv[1][i] = 90 - argv[1][i] + 65;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				argv[1][i] = 122 - argv[1][i] + 97;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1,"\n",1);
}		
