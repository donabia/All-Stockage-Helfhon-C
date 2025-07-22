/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:19:15 by sitier            #+#    #+#             */
/*   Updated: 2025/07/21 13:56:26 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_id(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	mantisse;
	int	len_base;

	mantisse = 0;
	len_base = ft_strlen(base);
	if (len_base > 1)
	{
		sign = 1;
		while (*str == ' ')
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		while (ft_id(*str, base) >= 0)
		{
			mantisse = mantisse * len_base + ft_id(*str, base);
			str++;
		}
		return (sign * mantisse);
	}
	return (0);
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
			return (0);
		i++;
	}
	return (i);
}

int	ft_id(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}
