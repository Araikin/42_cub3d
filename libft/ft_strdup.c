/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:59:16 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:59:18 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strdup
**	--------------------
**	 allocates sufficient memory for a copy of string 's1'
**
**	 s1:	string to copy
**
**	 returns:	pointer to the located memory or NULL if not enough memory
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup;
	int		i;

	len = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		dup[i] = s1[i];
	dup[i] = '\0';
	return (dup);
}
