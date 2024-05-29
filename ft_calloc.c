/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:01:12 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/26 18:08:48 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

int main()
{
	int* intArray = (int*)ft_calloc(5, sizeof(int));
	if (intArray != NULL)
	{
		int i = 0;
		while (i < 5)
		{
			printf("%d ", intArray[i]);
			i++;
		}
		printf("\n");
		free(intArray);
	}
}