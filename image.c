/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 06:31:29 by xrhoda            #+#    #+#             */
/*   Updated: 2018/08/23 15:16:49 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	clear_image(t_param *p)
{
	int i;
	int j;

	j = 0;
	while (j < HEIGHT)
	{
		i = 0;
		while (i < WIDTH)
		{
			if (p->buf[j * WIDTH + i] != 0x000000)
				p->buf[j * WIDTH + i] = 0x000000;
			i++;
		}
		j++;
	}
}

void	pixel_put_image(t_param *p, int x, int y, int c)
{
	if (x >= WIDTH || y >= HEIGHT || y < 0 || x < 0)
		return ;
	if (WIDTH * y + x < WIDTH * HEIGHT && WIDTH * y + x >= 0)
		p->buf[WIDTH * y + x] = mlx_get_color_value(p->mlx, c);
 }