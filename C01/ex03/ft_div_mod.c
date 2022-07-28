/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:45:17 by papalma           #+#    #+#             */
/*   Updated: 2022/07/24 20:14:03 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 15;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d", div, mod);
	return (0);
}*/
