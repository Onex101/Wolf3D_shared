/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trig_tables.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 07:04:57 by xrhoda            #+#    #+#             */
/*   Updated: 2018/08/08 09:05:17 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIG_TABLES_H
# define TRIG_TABLES_H

# include "wolf3d.h"

# define ANGLE_60 WIDTH
# define ANGLE_30 floor(WIDTH / 2)
# define ANGLE_15 floor(ANGLE_30 / 2)
# define ANGLE_90 floor(ANGLE_30 * 3)
# define ANGLE_180 floor(ANGLE_90 * 2)
# define ANGLE_270 floor(ANGLE_90 * 3)
# define ANGLE_360 floor(ANGLE_180 * 2)
# define ANGLE_0 0
# define ANGLE_10 floor(ANGLE_30 / 10)
# define ANGLE_45 floor(ANGLE_15 * 3)

typedef	struct	s_tables
{
	double		t_sin[WIDTH * 6 + 1];
	double		t_cos[WIDTH * 6 + 1];
	double		t_tan[WIDTH * 6 + 1];
	double		t_isin[WIDTH * 6 + 1];
	double		t_icos[WIDTH * 6 + 1];
	double		t_itan[WIDTH * 6 + 1];
	double		t_fish[WIDTH * 6 + 1];
	double		t_step_x[WIDTH * 6 + 1];
	double		t_step_y[WIDTH * 6 + 1];
}				t_tables;

typedef struct		s_dist
{
	t_tables		*t;
	t_vec2			*h_dist;
	t_vec2			*v_dist;
	t_pnt			*p1;
	t_pnt			*p2;
	double			h_distance;
	double			v_distance;
	double			a;
	int				n;
}					t_dist;

void			init_step_tables(t_tables *tables);
void			init_fish_table(t_tables *tables);
void			init_trig_tables(t_tables *tables);
void			init_tables(t_tables *tables);
t_tables		*get_tables(void);
//
t_dist			*ft_init_dist(t_player *p);
t_check			*ft_init_check(void);
double			ft_dist(t_player *p, t_pnt **p2, t_vec2 *d_vec, double dist, t_dist *d);
t_vec2			*ft_find_wall(t_check **h, t_param *par);
int				ft_find_h_col(t_check **ret, t_player *p, t_dist **d, t_param *par);
int				ft_hori_check(t_player *p, t_dist **d, t_param *par);
int				ft_find_v_col(t_check **ret, t_player *p, t_dist **d, t_param *par);
int				ft_vert_check(t_player *p, t_dist **d, t_param *par);
double 			ft_get_dist(t_player *p, t_dist *d, t_param *par);
int				ft_rays(t_param *par, t_player *p);

#endif