/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:30:12 by sitier            #+#    #+#             */
/*   Updated: 2025/07/14 00:19:48 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write (1, &str[i], 1);
	}
}
/*
int	main(void)
{
	ft_putstr("Skibidi_test");
}
	*/
