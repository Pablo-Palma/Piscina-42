/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:55:59 by papalma           #+#    #+#             */
/*   Updated: 2022/07/28 21:18:16 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	else if (nb < 10)
	{
		ft_putchar(nb % 10 + '0');
	}
}

int	main (void)
{
	int i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 ==  0)
		{
			write (1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (i % 5 ==  0)
		{
			write(1, "buzz", 4);
		}
		else
		{	
			ft_putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}
}
