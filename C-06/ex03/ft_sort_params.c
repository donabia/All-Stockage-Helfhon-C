/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitier <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:32:32 by sitier            #+#    #+#             */
/*   Updated: 2025/07/23 19:56:51 by sitier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_str(int size, char **strs);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char		**data_argv;
	int			i;

	data_argv = argv;
	data_argv = ft_sort_str(argc, data_argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(data_argv[i]);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (((*s1 - *s2) == 0) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort_str(int size, char **strs)
{
	char		*temp;
	int			i;
	int			j;

	j = 1;
	i = 1;
	while (j < size)
	{
		while (i < size - 1)
		{
			if (ft_strcmp(strs[j], strs[i]) < 0)
			{
				temp = strs[j];
				strs[j] = strs[i];
				strs[i] = temp;
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (strs);
}
