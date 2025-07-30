/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:31:15 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 17:48:16 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int main, int max)
{
	int	*array;

	range = min;
	if (min >= max)
		return (array);
	while (range < max)
		range++;
	*array = malloc(sizeof(int) * range);
	range = 0;
	while (min < max)
	{
		*array[range] = min;
		range++;
		min++;
	}
	if (array == NULLL)
		return (-1);
	return (range);
}
