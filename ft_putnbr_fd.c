/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:04:55 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/20 11:21:14 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
	free (str);
}

// Ejemplo Recursividad, nada importante, mi funcion es la de arriba
// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	c;

// 	if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		n *= -1;
// 	}
// 	if (n > 9)
// 		ft_putnbr_fd(n / 10, fd);
// 	c = (n % 10) + '0';
// 	write(fd, &c, 1);
// }

// #include <fcntl.h>
// int main (void)
// {
// 	int fd;
// 	fd = open ("prueba.txt", O_RDWR);
//  	int n = -2147483648;
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }