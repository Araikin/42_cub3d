/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:03:27 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:03:30 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memchr
**	--------------------
**	 locates the 1st occurence of 'c'(converted to unsigned char) in 's'
**
**	 s:	string
**	 c:	character to search for
**	 n:	number of bytes to search within
**
**	 returns:	pointer to the byte located or NULL
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
