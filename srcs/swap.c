/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:37:56 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 10:00:13 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	swap(&data->a);
	ft_printf("sa\n");
	data->operation[SA]++;
}

void	sb(t_data *data)
{
	swap(&data->b);
	ft_printf("sb\n");
	data->operation[SB]++;
}

void	ss(t_data *data)
{
	swap(&data->a);
	swap(&data->b);
	ft_printf("ss\n");
	data->operation[SS]++;
}