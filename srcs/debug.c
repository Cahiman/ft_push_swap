/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:26:31 by basianno          #+#    #+#             */
/*   Updated: 2026/11/24 13:56:51 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_data *data)
{
	int i = 0;

	ft_printf("a : ");
	while (i < data->a.size)
	{
		ft_printf("%d  ", data->a.data[i]);
		i++;
	}
	ft_printf("\n");
	i = 0;
	ft_printf("b : ");
	while (i < data->b.size)
	{
		ft_printf("%d  ", data->b.data[i]);
		i++;
	}
	ft_printf("\n");
	ft_printf("------------------------------------\n");
}