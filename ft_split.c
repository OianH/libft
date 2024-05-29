/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:48:12 by oiahidal          #+#    #+#             */
/*   Updated: 2024/05/22 14:59:50 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen_mod(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;
	int	is_word;

	words = 0;
	i = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			words++;
		}
		else if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (words);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i++])
		free(str[i]);
	free(str);
}

char	**ft_string_make(const char *s, char c, char **str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		k = 0;
		str[j] = malloc(sizeof(char) * (ft_strlen_mod(&s[i], c) + 1));
		if (!str[j])
			return (ft_free(str), NULL);
		while (s[i] && s[i] != c)
			str[j][k++] = s[i++];
		str[j][k] = '\0';
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	split = ft_string_make(s, c, split);
	return (split);
}

// int	main(void)
// {
// 	char	**test;
// 	int		i;

// 	i = 0;
// 	test = ft_split("Hola que tal", ' ');
// 	while (test[i])
// 		printf("%s\n", test[i++]);
// 	free(test);
// 	return (0);
// }
