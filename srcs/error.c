/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:22:44 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 11:33:49 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_data *data)
{
	free(data->a.data);
	free(data->b.data);
}

void	free_split(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	error_exit(t_data *data, char **tab)
{
	free_split(tab);
	free_all(data);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}