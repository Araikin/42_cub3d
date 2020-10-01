/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:59:25 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:59:27 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_striteri_bonus
**	-----------------------------
**	 applies the function 'f' to each character of the string passed as argument
**	 passing its index as first argument
**	 each character is passed by address to f to be modified if necessary.
**
**	 s:	string to iterate
**	 f:	function to apply to each character of s and its index
**
**	 returns:	none
*/

#include "libft.h"

void	ft_striteri_bonus(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &(s[i]));
			i++;
		}
	}
}
