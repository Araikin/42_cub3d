/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:50:03 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:50:08 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strnstr
**	--------------------
**	 locates the first occurence of null-terminated 'needle' in 'haystack',
**	 whithin 'len' characters
**
**	 haystack:	string to search within
**	 needle:	null-terminated string to search for
**	 len:		max number of bytes to search within
**
**	 returns:	pointer to the first char of the first occurence of 'needle'
**				'haystack' if 'needle' is empty string
**				NULL if no 'needle' found in 'haystack'
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (ft_strncmp(&haystack[i], needle, needle_len) != 0)
	{
		if (!haystack[i] || i >= len - needle_len)
			return (NULL);
		i++;
	}
	if (i > len)
		return (NULL);
	return ((char *)&haystack[i]);
}
