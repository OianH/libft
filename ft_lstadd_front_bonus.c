/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:21 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/15 09:50:22 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main (void)
// {
// 	t_list *uno;
// 	t_list *dos;
// 	t_list *tres;
// 	t_list *cuatro;
// 	t_list *first;
// 	t_list res;
// 	char    *contenido = "hola mundo";

// 	uno->next = dos;
// 	dos->next = tres;
// 	tres->next = cuatro;
// 	cuatro->next = NULL;
// 	first->content = contenido;
// 	ft_lstadd_front(uno, first);
// }