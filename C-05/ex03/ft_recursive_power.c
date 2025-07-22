/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:04:15 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 14:16:24 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_recursive_power(-3, 7));
}
*/
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result *= ft_recursive_power(nb, power - 1);
	return (result);
}
