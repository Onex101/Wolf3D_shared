/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 09:24:05 by xrhoda            #+#    #+#             */
/*   Updated: 2018/07/25 06:47:33 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <math.h>
# include "libft.h"

# define M_WIDTH 24
# define M_HEIGHT 24

# define WIDTH 320
# define HEIGHT 200
# define FOV	60
# define WALL_HEIGHT 64

typedef struct	s_vec2
{
	double		x;
	double		y;
}				t_vec2;

typedef struct	s_player
{
	t_vec2		pos;
	t_vec2		dir;
	double		v_angle;
	double		hght;
}				t_player;

typedef struct	s_plane
{
	int			proj_plane;
	t_vec2		centre;
	double		dist_plane;
	double		angl_rays;
}				t_plane;

typedef struct	s_window
{
	void		*win;
	void		*mlx;
}				t_window;

#endif
