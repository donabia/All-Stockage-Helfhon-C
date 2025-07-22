/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:13:20 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 11:51:42 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
