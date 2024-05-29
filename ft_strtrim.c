/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:45:54 by oiahidal          #+#    #+#             */
/*   Updated: 2024/04/29 12:41:49 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(*str) * (end - start + 1));
	if (!str)
		return (NULL);
	str[end - start] = '\0';
	return (ft_memcpy(str, s1 + start, end - start));
}

/* int main(void)
{
	char str1[] = "Hello,World";
	char set1[] = ",";
	char *result1 = ft_strtrim(str1, set1);
	printf("Resultado 1: '%s'\n", result1);
	free(result1);
} */