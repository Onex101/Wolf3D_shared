/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 08:34:01 by xrhoda            #+#    #+#             */
/*   Updated: 2018/08/23 20:09:20 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_add(t_vector *v, void *item)
{
	// if (v->capacity == v->total)
		// vector_resize(v, 64);
	v->items[(int)(v->total)++] = item;
}
