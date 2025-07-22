/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:11:17 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 23:14:46 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main()
{
	printf("%d", ft_sqrt(-144));
}
*/
int	ft_sqrt(int nb)
{
	int	i;
	int	stamp;

	i = 0;
	while (i * i <= nb)
	{
		stamp = i * i;
		if (stamp == nb)
			return (i);
		i++;
	}
	return (0);
}
