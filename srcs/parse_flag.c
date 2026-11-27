/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 15:55:31 by basianno          #+#    #+#             */
/*   Updated: 2026/11/27 18:11:59 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_flag(char *str)
{
	if (ft_strncmp(str, "--adaptive", 11) == 0)
		return (ADAPTIVE);
	if (ft_strncmp(str, "--simple", 9) == 0)
		return (SIMPLE);
	if (ft_strncmp(str, "--medium", 9) == 0)
		return (MEDIUM);
	if (ft_strncmp(str, "--complex", 10) == 0)
		return (COMPLEX);
	if (ft_strncmp(str, "--bench", 8) == 0)
		return (BENCH);
	return (UNKNOWN);
}

int	parse_args(int ac, char **av, t_data *data)
{
	int	check_strategy;
	int	j;
	int	flag;

	check_strategy = 0;
	j = 1;
	while (j < ac && av[j][0] == '-' && av[j][1] == '-')
	{
		flag = check_flag(av[j]);
		if (flag == UNKNOWN)
			error_exit(data, NULL);
		if (flag == BENCH)
			data->bench = 1;
		else if (check_strategy == 0)
		{
			data->strategy = flag;
			check_strategy = 1;
		}
		else
			error_exit(data, NULL);
		j++;
	}
	return (j);
}
