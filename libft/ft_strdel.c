/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:39:24 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:47:02 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strdel
**	--------------------
**	 takes as a parameter the address of a string that need to be freed,
**	 then sets its pointer to NULL.
**
**	 as:	the string’s address that needs to be freed
**			and its pointer set to NULL.
**
**	 returns:	none
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
