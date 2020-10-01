/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:29:18 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:30:26 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_putstr
**	-------------------------
**	 outputs the string 's' to the standard output
**
**	 s:		string to output
**
**	 returns:	none
*/

#include "libft.h"

void	ft_putstr(char *s)
{
	if (s)
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
}
