/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:01:18 by sitier            #+#    #+#             */
/*   Updated: 2025/07/30 18:03:06 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*final_roof_str(char *str);

char	*final_construct_str(char *str, char *final_str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len_sep;
	char	final_str;

	i = 0;
	len_sep = ft_strlen(sep);
	while (i <= size)
	{
		final_str = final_construct_str(strs[i], final_str);
		if (strs[i +1])
			final_str = final_construct_str(sep, final_str);
		else
			final_str = final_roof_str(final_str);
		i++;
	}
}

char	*final_construct_str(char *str, char *final_str)
{
	int		len_str;
	int		len_final_str;
	char	*saved;

	len_str = ft_strlen(str);
	len_final_str = ft_strlen(final_str);
	saved = final_str;
	final_str += len_final_str;
	final_str = malloc(sizeof(char) * len_str);
	while (str)
	{
		*final_str = *str;
		final str ++;
		str++;
	}
	return (saved);
}

char	*final_roof_str(char *str)
{
	int	len_str;

	len_str = ft_strlen(str);
	str += len_str;
	str = malloc(sizeof(char));
	str = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}
