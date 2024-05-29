/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:38:28 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/17 11:13:51 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	const char *str = "teste";
	char c = '\0';
	char *result = ft_strchr(str, c);
	char *result2 = strchr(str, c);
	printf("Direcccion de memoria original: %p\n", str);
	printf("Return propio: %p\n", &result);
	printf("Return propio: %s\n", result);
	printf("Return original: %p\n", &result2);
	printf("Return original: %s\n", result2);
	return (0);
} */
