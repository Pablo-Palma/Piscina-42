/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:10:36 by papalma           #+#    #+#             */
/*   Updated: 2022/07/24 22:08:56 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	t;

		i = 0;
	t = size;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	i;
	int	tab[] = {0,1,2,3,4,5};
	int	size;

	i = 0;
	size =6;
	ft_rev_int_tab(tab,size);
	while (i < size) 
	{	
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
