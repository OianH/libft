/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:50:16 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/17 20:18:00 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// int main(void)
// {
//     t_list *list = NULL;
//     t_list *uno = ft_lstnew(NULL);
//     t_list *dos = ft_lstnew(NULL);
//     t_list *tres = ft_lstnew(NULL);
//     t_list *cuatro = ft_lstnew(NULL);
//     char *contenido = "hola mundo";

//     uno->next = dos;
//     dos->next = tres;
//     tres->next = cuatro;
//     cuatro->next = NULL;
//     list = uno;
//     t_list *first = ft_lstnew(contenido);
//     ft_lstadd_back(&list, first);
//     t_list *temp = list;
//     while (temp)
// 	{
//         if (temp->content)
// 		{
//             printf("%s\n", (char *)temp->content);
//         } else {
//             printf("Nodo vacío\n");
//         }
//         temp = temp->next;
//     }
//     while (list)
// 	{
//         t_list *next = list->next;
//         free(list);
//         list = next;
//     }
//     return 0;
// }