/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:52:45 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 21:08:39 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	end_check(int new_n, int n);

int	checker_case(int x, int y, int n, char	**map)
{
	int	x_saved;
	int	y_saved;
	int	x_treshold;
	int	y_treshold;
	int	new_n;

	x_saved = x;
	y_saved = y;
	x_treshold = x + n;
	y_treshold = y + n;
	while (y <= y_treshold && map[y][x] == 0)
	{
		while (x <= x_treshold)
		{
			if (map[y][x] == t_map->settings->obst)
				return (0);
			if (x == x_treshold && y == y_treshold)
				new_n = ft_checker(x_saved, y_saved, n + 1, map);
			x++;
		}
		x = x_saved;
		y++;
	}
	return (end_check(new_n, n));
}

int	end_check(int new_n, int n)
{
	if (new_n > n)
		return (new_n);
	else
		return (0);
}
