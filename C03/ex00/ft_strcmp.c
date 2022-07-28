/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papalma <papalma@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:38:24 by papalma           #+#    #+#             */
/*   Updated: 2022/07/27 19:46:25 by papalma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	result;

	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}
/*int	main(void)
{
	char a[] = "pablo";
	char b[] = "pablo";
	char c[] = "almap";

	int resultado;
	resultado=ft_strcmp(a, b);
	printf("%d \n", resultado);
	resultado=ft_strcmp(b, c);
	printf("%d \n", resultado);
	resultado=ft_strcmp(a, c);
	printf("%d \n", resultado);
}*/
