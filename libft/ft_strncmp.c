/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:04:34 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:48:45 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strncmp
**	--------------------
**	 compares not more than 'n' characters of 's1' and 's2' strings
**
**	 s1:	string 1 to compare
**	 s2:	string 2 to compare
**	 n:		max number of characters to compare
**
**	 returns:	integer > 0, = 0, < 0 if 's1' > , = , < than 's2'
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
