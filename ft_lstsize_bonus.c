/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:40:54 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/24 11:43:27 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *uno = ft_lstnew(NULL);
// 	t_list *dos = ft_lstnew(NULL);
// 	t_list *tres = ft_lstnew(NULL);
// 	char *contenido = "hola mundo";

// 	uno->next = dos;
// 	dos->next = tres;
// 	tres->next = NULL;
// 	uno->content = ft_strdup(contenido);
// 	dos->content = ft_strdup(contenido);
// 	tres->content = ft_strdup(contenido);
// 	printf("%d\n", ft_lstsize(uno));
// }