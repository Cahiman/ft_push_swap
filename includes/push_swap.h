/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 08:50:52 by basianno          #+#    #+#             */
/*   Updated: 2026/11/27 16:59:39 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef enum e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	OP_COUNT
}	t_op;

typedef enum e_strategy
{
	ADAPTIVE,
	SIMPLE,
	MEDIUM,
	COMPLEX,
	BENCH,
	UNKNOWN
}	t_strategy;

typedef struct s_stack
{
	int	*data;
	int	size;
}	t_stack;

typedef struct s_data
{
	t_stack	a;
	t_stack	b;
	int		operation[OP_COUNT];
	int		bench;
	int		strategy;
}	t_data;


int	check_flag(char *str);
int	parse_args(int ac, char **av, t_data *data);

void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *from, t_stack *to);

void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);

void	pa(t_data *data);
void	pb(t_data *data);

void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);

void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

void	free_all(t_data *data);
void	free_split(char **tab);
void	error_exit(t_data *data, char **tab);

void	print_stacks(t_data *data); // A ENLEVER PLUS TARD

#endif
