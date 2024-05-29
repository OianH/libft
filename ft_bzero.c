/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:19:28 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/26 18:13:25 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char str1[10] = "Hello";
// 	char str2[10] = "World";

// 	ft_bzero(str1, 10);
// 	printf("str1 después de ft_bzero: %s\n", str1);
// 	ft_bzero(str2, 10);
// 	printf("str2 después de ft_bzero: %s\n", str2);
// 	return (0);
// }