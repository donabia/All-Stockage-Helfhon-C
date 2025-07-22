/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:06:33 by sitier            #+#    #+#             */
/*   Updated: 2025/07/21 09:26:44 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d", ft_atoi( "   --+-42"));
}
*/
int	ft_atoi(char *str)
{
	int	sign;
	int	mantisse;

	sign = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		mantisse = mantisse * 10 + (*str - '0');
		str++;
	}
	return (sign * mantisse);
}
