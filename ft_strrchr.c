/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:13:28 by oiahidal          #+#    #+#             */
/*   Updated: 2024/04/23 18:20:30 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (ft_strlen(s));
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/* #include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *str = "teste";
	char c = 0;
	char *result = ft_strrchr(str, c);
	char *result2 = strrchr(str, c);
	printf("Return propio: %s\n", result);
	printf("Return original: %s\n", result2);
	return (0);
} */