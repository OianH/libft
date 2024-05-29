/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:12:09 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/15 19:03:43 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_toupper_mod(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z' && i % 2 == 0)
// 		return (c - 32);
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				size;
	char			*str;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *str = "hola mundo bonito";
// 	char *test = ft_strmapi(str, &ft_toupper_mod);
// 	printf("%s\n", test);
// }