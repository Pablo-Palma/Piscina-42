/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:31:28 by papalma           #+#    #+#             */
/*   Updated: 2022/07/26 16:51:41 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	z;
	unsigned int	i;

	i = 0;
	z = 0;
	while (src[z] != '\0')
		z++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (z);
}

/*int main()
{
  	char src[20] = "Pablo";
  	char dest[20] = "PalmaPPR";

	int i = strlcpy(dest, src, 4 );
	printf("dest: %s \n", dest);
	printf("size: %d \n", i);
	return (0);
}*/
