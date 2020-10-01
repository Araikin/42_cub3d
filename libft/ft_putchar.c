/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:27:17 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:27:57 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_putchar
**	-------------------------
**	 outputs the character 'c' to the file descriptor 1
**
**	 c:		character to output
**
**	 returns:	none
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
