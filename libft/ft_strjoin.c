/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:13:16 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:13:17 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strjoin
**	----------------------
**	 Allocates new string, result of concatenation of ’s1’ and ’s2’.
**
**	 s1:	the prefix string
**	 s2:	the suffix string
**
**	 returns: the new string.  NULL if the allocation fails
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(newstr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (s1[j])
		newstr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}
