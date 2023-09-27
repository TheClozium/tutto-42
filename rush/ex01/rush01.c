/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar (copy).c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:12:35 by lmicheli          #+#    #+#             */
/*   Updated: 2023/09/09 11:12:49 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
void ft_putchar();
void	rush(int x,int y)
{
	int c;
	int g;
	c=1;
	g=1;
	while(g<=y)
	{
		while (c<=x)
		{
			if      ((g==1 && c==1) || (g==y && c==x))
			{
				write (1, "/", 1);
			}
			else if ((g==y && c==1) || (g==1 && c==x))
			{
				write (1, "\\", 1);
			}
			else if ((c>1 && c<x) && (g!=1 && g!=y))
			{
				write (1, " ", 1);
			}
			else
			{
				write (1, "*", 1);
			}
			c++;
		}
		if (c>x)
		{
			c=1;
			g++;
			ft_putchar();
		}	
	}
}
