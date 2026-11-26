/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:37:53 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 10:08:07 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	rotate(&data->a);
	ft_printf("ra\n");
	data->operation[RA]++;
}

void	rb(t_data *data)
{
	rotate(&data->b);
	ft_printf("rb\n");
	data->operation[RB]++;
}

void	rr(t_data *data)
{
	rotate(&data->a);
	rotate(&data->b);
	ft_printf("rr\n");
	data->operation[RR]++;
}