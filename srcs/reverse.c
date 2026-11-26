/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:37:51 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 10:09:24 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data)
{
	reverse_rotate(&data->a);
	ft_printf("rra\n");
	data->operation[RRA]++;
}

void	rrb(t_data *data)
{
	reverse_rotate(&data->b);
	ft_printf("rrb\n");
	data->operation[RRB]++;
}

void	rrr(t_data *data)
{
	reverse_rotate(&data->a);
	reverse_rotate(&data->b);
	ft_printf("rrr\n");
	data->operation[RRR]++;
}