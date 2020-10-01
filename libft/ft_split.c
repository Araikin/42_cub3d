/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:04:47 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:46:48 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_split
**	--------------------
**	 allocates and returns an array of strings obtained by splitting ’s’
**	 using char ’c’ as a delimiter
**	 the array must be ended by a NULL pointer.
**
**	 s:	string to be split
**	 c:	delimeter character
**
**	 returns:	array of new strings resulting from the split.
**		 		NULL if the allocation fails.
*/

#include "libft.h"

static char	**memory(char const *s, int words_num, int m, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	start;

	i = 0;
	start = 0;
	arr = NULL;
	if (!(arr = (char **)malloc(sizeof(char *) * (words_num + 1))))
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[m++] = ft_substr(s, start, i - start);
		start = 0;
		while (s[i] == c)
			i++;
	}
	arr[m] = 0;
	return (arr);
}

char		**ft_split(char const *s, char c)
{
	int		words_num;
	char	**arr;

	arr = NULL;
	if (s)
	{
		words_num = ft_countwords_bonus(s, c);
		arr = memory(s, words_num, 0, c);
	}
	return (arr);
}
