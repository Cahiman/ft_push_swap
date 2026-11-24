/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 08:51:00 by basianno          #+#    #+#             */
/*   Updated: 2026/11/24 13:56:23 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main()
{
	t_data data;

	ft_bzero(&data, sizeof(t_data));
	data.a.data = malloc(sizeof(int) * 6);
	if (!data.a.data)
		return (1);
	data.b.data = malloc(sizeof(int) * 6);
	if (!data.b.data)
		return (free(data.a.data), 1);
	data.a.data[0] = 2;
	data.a.data[1] = 1;
	data.a.data[2] = 3;
	data.a.data[3] = 6;
	data.a.data[4] = 5;
	data.a.data[5] = 8;
	data.a.size = 6;
	print_stacks(&data);
	swap(&data.a);
	print_stacks(&data);
	push(&data.a, &data.b);
	push(&data.a, &data.b);
	push(&data.a, &data.b);
	print_stacks(&data);
	rotate(&data.a);
	rotate(&data.b);
	print_stacks(&data);
	reverse_rotate(&data.a);
	reverse_rotate(&data.b);
	print_stacks(&data);
	swap(&data.a);
	print_stacks(&data);
	push(&data.b, &data.a);
	push(&data.b, &data.a);
	push(&data.b, &data.a);
	print_stacks(&data);
	free(data.a.data);
	free(data.b.data);
	return (0);
}
