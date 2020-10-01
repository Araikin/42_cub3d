/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:00:43 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:00:44 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strtrim
**	----------------------
**	 Allocates and returns a copy of 's1' w/o the characters specified in 'set'
**	 removed from the beginning and the end of the string.
**
**	 s1:	string to be trimmed
**	 set:	the reference set of characters to trim
**
**	 returns:	the trimmed string or NULL if the allocation fails
*/

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strnew_bonus(1));
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
