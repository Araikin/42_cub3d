/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:50:44 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:50:45 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_isupper_bonus
**	----------------------------
**	 check if character is uppercase alphabet char A-Z
**
**	 c:	character to check
**
**	 returns:	1 or 0 depending if character is A-Z or not
*/

#include "libft.h"

int		ft_isupper_bonus(char c)
{
	return (c >= 'A' && c <= 'Z');
}
