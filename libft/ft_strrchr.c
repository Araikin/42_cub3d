/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:03:59 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/17 16:36:29 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strrchr
**	--------------------
**	 locates the last occurence of 'c'(as char) in str 's'.
**	 '\0' considered to be part of string, so function can locate it too
**
**	 s:	pointer to string to search within
**	 c:	character to search for in string 's'
**
**	 returns:	pointer to the located character or NULL if char doesn't appear
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str) + 1;
	while (i > 0)
		if (str[--i] == (char)c)
			return (&str[i]);
	return (NULL);
}
