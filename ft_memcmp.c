/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:04:15 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/16 20:17:01 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "Hello";
// 	char str2[] = "World";

// 	int result = ft_memcmp(str1, str2, 5);

// 	if(result < 0)
// 		printf("str1 es mas pequeño que str2\n");
// 	else if(result > 0)
// 		printf("str1 es mas grande que str2\n");
// 	else
// 		printf("str1 es de igual tamaño que str2\n");
// 	return 0;
// }