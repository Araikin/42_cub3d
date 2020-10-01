/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:00:30 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/30 14:01:50 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include <math.h>

typedef struct	s_map
{
	int[2]		resolution;
	char		*north_texture;
	char		*south_texture;
	char		*west_texture;
	char		*east_texture;
	char		*sprite_texture;
	t_color		*floor_color;
	t_color		*ceilling_color;
}				t_map;

typedef struct	s_color
{
	int			red;
	int			green;
	int			blue;
}				t_color;

typedef struct	s_env
{
	int			map_height;
	int			map_width;
}				t_env;

#endif
