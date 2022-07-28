/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:18:29 by papalma           #+#    #+#             */
/*   Updated: 2022/07/20 20:25:57 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n >= 0)
	{
		write(1, &b, 1);
	}
	else if (n < 0)
	{
		write(1, &a, 1);
	}	
}

/*int	main(void)
{
	ft_is_negative(3);
	return (0);
}*/
