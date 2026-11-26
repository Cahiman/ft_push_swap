/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 08:51:00 by basianno          #+#    #+#             */
/*   Updated: 2026/11/26 11:49:49 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main()
{
	t_data data;
	int i = 0;

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
	sa(&data);
	print_stacks(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	print_stacks(&data);
	rr(&data);
	print_stacks(&data);
	rrr(&data);
	print_stacks(&data);
	sa(&data);
	print_stacks(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	print_stacks(&data);
	while (i < OP_COUNT)
	{
		ft_printf("Operations : %d ", data.operation[i]);
		i++;
	}
	free_all(&data);
	return (0);
}
