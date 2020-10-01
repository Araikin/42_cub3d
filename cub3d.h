/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:00:30 by asultanb          #+#    #+#             */
/*   Updated: 2020/10/01 15:14:35 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include <math.h>

typedef struct	s_rgb
{
	int			red;
	int			green;
	int			blue;
}				t_rgb;

typedef struct	s_map
{
	char		*north_texture;
	char		*south_texture;
	char		*west_texture;
	char		*east_texture;
	char		*sprite_texture;
	t_rgb		*floor_color;
	t_rgb		*ceilling_color;
}				t_map;

typedef struct	s_cub3d
{
	int			map_height;
	int			map_width;
	t_map		*map;
}				t_cub3d;

#endif
