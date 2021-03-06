/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 09:53:00 by xrhoda            #+#    #+#             */
/*   Updated: 2018/07/30 09:42:03 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_image(void *image)
{
	int i;
	int j;

	j = 0;
	while (j < HEIGHT)
	{
		i = 0;
		while (i < WIDTH)
		{
			pixel(win->mlx, i, j, 0x0);
			i++;
		}
		j++;
	}
}

void	put_image(t_window *w)
{
	static void *image;

	if (!image)
	{
		if (!(image = mlx_new_image(w->mlx, WIDTH, HEIGHT)))
			return ;
	}
	else
	{
		clear_image(image);
	}
}