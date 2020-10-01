/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:00:23 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:48:32 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strmapi
**	----------------------
**	 applies the function ’f’ to each character of thestring ’s’
**	 to create a new string resulting from successive applications of ’f’.
**
**	 s:	string on which to iterate
**	 f:	function to apply to each character
**
**	 returns:	string created from the successive applications of ’f’
**				NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = NULL;
	if (s && f)
	{
		if (!(str = ft_strdup(s)))
			return (NULL);
		i = -1;
		while (s[++i])
			str[i] = f(i, s[i]);
		str[i] = '\0';
	}
	return (str);
}
