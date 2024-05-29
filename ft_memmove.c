/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:38:08 by oiahidal          #+#    #+#             */
/*   Updated: 2024/04/25 12:22:35 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (++i < len)
			((char *)dst)[i] = ((char *)src)[i];
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

/* int main()
{
	char	src[] = "Hola que tal";
	char *	dst = src + 3;
	size_t len = 14;
	ft_memmove(dst, src, len);
	printf("%s\n", dst);
	return (0);
} */