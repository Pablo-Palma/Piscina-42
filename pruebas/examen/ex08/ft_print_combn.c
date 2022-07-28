/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:55:08 by papalma           #+#    #+#             */
/*   Updated: 2022/07/23 21:30:25 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int n, int *tab)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		ft_putchar(tab[i] + '0');
	}
}

void	add(int n, int *tab)
{
	int	i;
	int	maxi;

	i = n - 1 ;
	maxi = 9;
	while (tab[i] == maxi)
	{
		maxi --;
		i --;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] +1;
		i ++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	if ((n > 9) || (n < 1))
	{
		return ;
	}
	i = -1;
	while (++i < 10)
		tab[i] = i;
	print_tab(n, tab);
	write(1, ", ", 2);
	while ((tab[0] != (10 - n)) || (tab[n - 1] != 9))
	{
		if ((tab[n - 1] != 9))
			tab[n - 1] += 1;
		else
			add(n, tab);
		print_tab(n, tab);
		if ((tab[0] == (10 - n)) && (tab[n - 1] == 9))
			write(1, "\n", 1);
		else
			write(1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
