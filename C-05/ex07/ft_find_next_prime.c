/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:21:47 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 23:32:56 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d", ft_find_next_prime(3302));
}
*/
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

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
