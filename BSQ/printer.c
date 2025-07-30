/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:19:04 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 21:35:21 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_items	**modify_map(t_items **map, int *bsq);

void	printer(t_map *get_map, int *bsq)
{
	t_items **map;

	map = get_map->matrix;
	bsq = map_wanderer(map);
	map = modify_map(map, int *bsq);
}

t_items **modify_map(t_items **map, int *bsq)
{
	int	x;
	int	y;
	int	x_saved;
	int	y_saved;
	int	init_x;

	x = bsq[0];
	y = bsq[1];
	init_x = x;
	init_x = y;
	x_limit = bsq[0] + bsq[2];
	y_limit = bsq[1] + bsq[2];
	while (y < y_limit)
	{
		while (x < x_limit)
		{
			map[y][x] = t_map->settings->fill;
		}
		x = init_x;
		y++;
	}
	return (map);
}
