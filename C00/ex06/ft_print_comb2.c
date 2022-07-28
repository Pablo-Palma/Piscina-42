/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:31:42 by papalma           #+#    #+#             */
/*   Updated: 2022/07/23 18:55:18 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int num)
{
	char	dec;	
	char	uni;

	dec = num / 10 + '0';
	uni = num % 10 + '0';
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_int(a);
			write(1, " ", 1);
			print_int(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
				b++;
		}
			a++;
	}			
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
