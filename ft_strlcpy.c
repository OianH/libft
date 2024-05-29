/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:23:12 by oiahidal          #+#    #+#             */
/*   Updated: 2024/04/23 14:45:14 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	if (dstsize < 1)
		return (0);
	while (src[j])
		j++;
	return (j);
}

/* #include <stdio.h>
int main(void)
{
	char src[] = "aaa";
	char dst[20];

	size_t len = ft_strlcpy(dst, src, 0);
	size_t	len2 = strlcpy(dst, src, 0);
	printf("Mi String copiada: %s\n", dst);
	printf("Mi Longitud de copiado: %zu\n", len);
		printf("OG String copiada: %s\n", dst);
	printf("OG Longitud de copiado: %zu\n", len2);
	return 0;
} */
