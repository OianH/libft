/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:49:08 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/22 14:46:52 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_toupper_mod(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
// 		*c = *c - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int main (void)
// {
// 	char str[] = "hola mundo bonito";
// 	ft_striteri(NULL, &ft_toupper_mod);
// 	printf("%s\n", str);
// }