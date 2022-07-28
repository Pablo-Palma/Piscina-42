/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:56:14 by papalma           #+#    #+#             */
/*   Updated: 2022/07/27 22:18:22 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		if (s1[c] > s2[c])
		{
			return (1);
		}
		if (s1[c] < s2[c])
		{
			return (-1);
		}
		c++;
	}
	return (0);
}
/*int	main(void)
{
	char a[] = "pabla";
	char b[] = "pablo";
	char c[] = "almap";
	
	int result;
	result=ft_strncmp(a, b, 6);
	printf("%d \n", result);
	result=ft_strncmp(b, c, 2);
	printf("%d \n", result);
	result=ft_strncmp(a, c, 3);
	printf("%d \n", result);
}*/
