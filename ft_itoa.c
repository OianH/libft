/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:14:53 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/17 20:00:24 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (ft_nlen(n) + 1));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	i = ft_nlen(n);
	result[i--] = '\0';
	while (n)
	{
		if (n % 10 < 0)
			result[i--] = ((n % 10) * -1) + '0';
		else
			result[i--] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(55));
// 	return (0);
// }