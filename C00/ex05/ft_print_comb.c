/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:13:20 by papalma           #+#    #+#             */
/*   Updated: 2022/07/20 20:49:12 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	st[3];

	st[0] = '0';
	while (st[0] <= '7')
	{
		st[1] = st[0] + 1;
		while (st[1] <= '8')
		{
			st[2] = st[1] + 1;
			while (st[2] <= '9')
			{
				write(1, &st[0], 1);
				write(1, &st[1], 1);
				write(1, &st[2], 1);
				if (!(st[0] == '7' && st[1] == '8' && st[2] == '9'))
					write(1, ", ", 2);
				st[2]++;
			}
			st[1]++;
		}
	st[0]++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
