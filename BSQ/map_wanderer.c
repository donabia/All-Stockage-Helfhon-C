/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_wanderer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:05:00 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 21:18:23 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*map_wanderer(t_map *get_map)
{
	int		x;
	int		y;
	int		n;
	int		*bsq;
	t_items	**map;

	x = 0;
	y = 0;
	bsq[2] = {0, 0, 0};
	n_test = 0;
	map = get_map->matrix;
	while (y <= gl)
	{
		while (x <= gl)
		{
			n_test = checker_case(x, y, bsq[2], get_map);
			if (n_test > bsq[2])
				bsq = bsq_indexer(x, y, n_test);
			x++;
		}
		x = 0;
		y++;
	}
	return (bsq);
}

int	*bsq(int x, int y, int n_test, t_memory *memory)
{
	int	*bsq;

	bsq = set_allocation(memory, 3);
	if (!bsq)
		return ((void *)0);
	bsq[0] = x;
	bsq[1] = y;
	bsq[2] = n_test;
	return (bsq);
}
