/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:01:43 by sitier            #+#    #+#             */
/*   Updated: 2025/07/22 18:09:16 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main()
{
	printf("%d", ft_fibonacci(20));
}
*/
int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (--index >= 0)
		result = ft_fibonacci(index) + ft_fibonacci(index -1);
	return (result);
}
