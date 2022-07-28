/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:47:55 by papalma           #+#    #+#             */
/*   Updated: 2022/07/28 18:25:52 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	sign = -1;
	nb = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13)
			i++;
	while (str[i] != 32 && str[i] != 9 && str[i] != 10 && str[i] != 11
		&& str[i] != 12 && str[i] != 13)
	{
		if (str[i] == 45)
			sign *= -1;
		else if (str[i] >= 48 && str[i] <= 57)
			nb = (nb * 10) + str[i] - '0';
		else
			if (str[i] != 43)
				return (sign * nb);
		i++;
	}
	return (sign * nb);
}

/*int	main(void)
{
	printf("%d\n",ft_atoi(" -+----+--+-1234567"));

}*/
