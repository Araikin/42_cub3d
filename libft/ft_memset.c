/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:03:03 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:45:25 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memset
**	--------------------
**	 writes 'len' bytes of value 'c'(as unsigned char) to string 'b'
**
**	 b:		string to write to
**	 c:		character to write to string
**	 len:	number of bytes to write
**
**	 returns:	its first argument, e.g. string 'b'
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char *)b;
	i = 0;
	while (i < len)
		s[i++] = (unsigned char)c;
	return (b);
}
