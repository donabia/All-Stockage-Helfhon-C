/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:00:41 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 17:47:47 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;

	range = min;
	if (min >= max)
		return (array);
	while (range < max)
		range++;
	array = malloc(sizeof(int) * range);
	range = 0;
	while (min < max)
	{
		array[range] = min;
		range++;
		min++;
	}
	return (array);
}
