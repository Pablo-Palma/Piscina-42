 ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:32:01 by papalma           #+#    #+#             */
/*   Updated: 2022/07/26 12:47:26 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_output(char a[10], int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		write(1, &a[j], 1);
		j++;
	}
	if (a[0] != '9' + 1 - n)
		write(1, ", ", 2);
}

void	ft_print_combn_rec(char a[10], int n, int i)
{
	int	j;

	j = 0;
	if (i == 0)
		a[i] = '0';
	else
		a[i] = a[i - 1] + 1;
	while (a[i] <= '9')
	{
		if (i == n - 1)
		{
			write_output(a, n);
		}
		ft_print_combn_rec(a, n, i + 1);
	}
	a[i] = ++a[i - 1] + 1;
}

void	ft_print_combn(int n)
{
	char	a[11];

	if (n >= 1 && n <= 9)
	{
		ft_print_combn_rec(a, n, 0);
	}
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
