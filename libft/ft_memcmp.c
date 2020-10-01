/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:57:23 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:44:51 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memcmp
**	--------------------
**	 compares 's1' and 's2' byte strings. Both strings are 'n' bytes long
**
**	 s1:	first string to compare
**	 s2:	second string to compare
**	 n:		length of each string in bytes
**
**	 returns:	0 if strings are identical, empty strings are also identical
**				or difference between them.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u1;
	unsigned char	*u2;
	size_t			i;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		i++;
	}
	return (0);
}
