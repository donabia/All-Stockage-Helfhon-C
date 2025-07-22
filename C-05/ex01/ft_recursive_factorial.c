/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:23:12 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 13:50:42 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
}
*/
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 1)
		result *= ft_recursive_factorial(nb -1);
	return (result);
}
