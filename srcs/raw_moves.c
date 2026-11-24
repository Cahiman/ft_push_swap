/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raw_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:02:53 by basianno          #+#    #+#             */
/*   Updated: 2026/11/24 13:24:38 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (!stack || stack->size < 2)
		return ;
	temp = stack->data[1];
	stack->data[1] = stack->data[0];
	stack->data[0] = temp;
}

void	rotate(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack || stack->size < 2)
		return ;
	i = 0;
	temp = stack->data[0];
	while (i < (stack->size - 1))
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->data[stack->size - 1] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (!stack || stack->size < 2)
		return ;
	i = stack->size - 1;
	temp = stack->data[stack->size - 1];
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = temp;
}

void	push(t_stack *from, t_stack *to)
{
	int	i;

	if (!from || !to || from->size < 1)
		return ;
	i = to->size;
	while (i > 0)
	{
		to->data[i] = to->data[i - 1];
		i--;
	}
	to->data[0] = from->data[0];
	i = 0;
	while (i < (from->size - 1))
	{
		from->data[i] = from->data[i + 1];
		i++;
	}
	from->size--;
	to->size++;
}