/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:24:50 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/15 19:05:24 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// int main (void)
// {
// 	int fd;
// 	fd = open ("prueba.txt", O_RDWR);
// 	char *s = "Hola";
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }