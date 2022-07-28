/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:28:06 by papalma           #+#    #+#             */
/*   Updated: 2022/07/27 19:50:54 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>*/
/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*int main(void)
{
	char str [] = "Pablo Palma";
	char to_find[] = "lo";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
