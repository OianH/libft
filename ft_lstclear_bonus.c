/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:23:35 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/17 18:16:05 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*con;

	if (lst && del)
	{
		while (*lst)
		{
			con = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = con;
		}
	}
}

// int main()
// {
// 	t_list *uno = ft_lstnew(NULL);
// 	t_list *dos = ft_lstnew(NULL);
// 	t_list *tres = ft_lstnew(NULL);
// 	t_list *cuatro = ft_lstnew(NULL);
// 	char *contenido = "hola mundo";

// 	uno->next = dos;
// 	dos->next = tres;
// 	tres->next = cuatro;
// 	cuatro->next = NULL;
// 	uno->content = strdup(contenido);
// 	dos->content = strdup(contenido);
// 	tres->content = strdup(contenido);
// 	cuatro->content = strdup(contenido);

// 	t_list *temp = uno;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	ft_lstclear(&uno, free);

// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	return 0;
// }