/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:18:02 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/28 16:02:36 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		check_filename_ext(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (filename[len - 1] == 'b' && filename[len - 2] == 'u' &&
		filename[len - 3] == 'c' && filename[len - 4] == '.' &&
		len > 4)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		if (check_filename_ext(av[1]))
			ft_printf("correct\n");
	return (0);
}
