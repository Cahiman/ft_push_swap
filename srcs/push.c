/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:37:47 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 10:06:38 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data)
{
	push(&data->b, &data->a);
	ft_printf("pa\n");
	data->operation[PA]++;
}

void	pb(t_data *data)
{
	push(&data->a, &data->b);
	ft_printf("pb\n");
	data->operation[PB]++;
}