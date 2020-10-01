/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:59:37 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:01:41 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strcjoin_bonus
**	-----------------------------
**	 allocates memory for new nul-terminated string,
**	 result of the concatenation of s1 and s2 with 'c' character between
**
**	 s1:	string to concatinate
**	 s2:	second string to concatinate
**	 c:		character to concatinate two strings with
**
**	 returns:	new string or NULL if allocation fails
*/

#include "libft.h"

char	*ft_strcjoin_bonus(char *s1, char c, char *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (ft_strdup(s2));
	r = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (r == NULL)
		return (NULL);
	while (s1[j] != '\0')
		r[i++] = s1[j++];
	r[i++] = c;
	j = 0;
	while (s2[j] != '\0')
		r[i++] = s2[j++];
	r[i] = '\0';
	return (r);
}
