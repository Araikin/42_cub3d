/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:13:42 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:13:43 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strchr
**	--------------------
**	 locates the first occurence of 'c'(as char) in str 's'.
**	 '\0' considered to be part of string, so function can locate it too
**
**	 s:	pointer to string to search within
**	 c:	character to search for in string 's'
**
**	 returns:	pointer to the located character or NULL if char doesn't appear
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
