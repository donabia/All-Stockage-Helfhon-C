/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:38:10 by sitier            #+#    #+#             */
/*   Updated: 2025/07/21 13:58:36 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putnbr_base(int nb, char *base);

int	main()
{
	ft_putnbr_base( 43452687, "abcdefghijklmnopqr tuv");
}
*/
int	ft_strlen(char *str);

void	ft_putnbr_base(int nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!(base_len > 2))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 0 && nb < base_len)
		write(1, &base[nb], 1);
	else
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-'
			|| !((str[i] > 31 && str[i] < 127)
				|| str[i] == ' '))
			return (-1);
		i++;
	}
	return (i);
}
