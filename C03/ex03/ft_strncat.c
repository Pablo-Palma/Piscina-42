/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:22:37 by papalma           #+#    #+#             */
/*   Updated: 2022/07/27 19:49:50 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>*/
/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && k < nb)
	{
		dest[i + j] = src[j];
		j++;
		k++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main(void)
{
	unsigned int nb;
	char src[] = "Palma";
	char dest[] = "Pablo";

	nb = 4;
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
