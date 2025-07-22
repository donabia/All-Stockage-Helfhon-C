/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:15:11 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 23:20:37 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d", ft_is_prime(3300));
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	while (++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
