/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:05:11 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/18 16:49:16 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_substr
**	---------------------
**	 allocates substring from string 's'
**	 substring begins at 'start' and is of max size 'len'
**
**	 s:		string from which to create the substring
**	 start:	start index of the substring in the string 's'
**	 len:	max length of substring
**
**	 returns:	pointer to substring or NULL if allocation fails
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	substr = NULL;
	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (!s || !substr || (long)len < 0)
		return (NULL);
	i = 0;
	strlen = ft_strlen(s);
	while (i < len && s[start] != '\0' && start < strlen)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
