/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_draw_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <ecaceres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:55:52 by ecaceres          #+#    #+#             */
/*   Updated: 2019/11/18 14:55:52 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "image.h"

void
	image_draw_vertical_line(t_drawer_line_args args, int x, int y_start,
								int y_end)
{
	int		y;
	size_t	offset;

	y = y_start;
	offset = y * args.image->line_unit + x;
	while (y < y_end)
	{
		args.image->pic[offset] = args.color;
		offset += args.image->line_unit;
		y++;
	}
}
