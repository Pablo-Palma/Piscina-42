/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:15:42 by papalma           #+#    #+#             */
/*   Updated: 2022/07/26 12:30:27 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (((str[c] >= 'a') && (str[c] <= 'z')) && (i == 0))
		{
			str[c] -= (32);
			i++;
		}
		else if (((str[c] >= 'A') && (str[c] <= 'Z')) && (i > 0))
		{
			str[c] += (32);
		}
		else if (((str[c] < '0') || (str[c] > '9')) && ((str[c] < 'A')
				|| (str[c] > 'Z')) && ((str[c] < 'a') || (str[c] > 'z')))
				i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char str[30] = "pa3b pal:a";

	printf("%s\n",ft_strcapitalize(str));
	return (0);
}*/
