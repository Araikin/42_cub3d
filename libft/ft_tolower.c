/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:58:24 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:58:28 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_tolower
**	--------------------
**	 converts an upper-case letter to corresponding lower-case
**
**	 c:	character to test
**
**	 returns:	corresponding lower-case character
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
