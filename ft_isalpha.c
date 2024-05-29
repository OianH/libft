/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:36:02 by oiahidal          #+#    #+#             */
/*   Updated: 2024/04/22 11:23:15 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* #include <ctype.h>
#include <stdio.h>
int main (void)
{
	char c;
	c = ' ';
	printf("Funcion Original = %d\n", isalpha(c));
	printf("Funcion Original = %d\n", ft_isalpha(c));
} */
