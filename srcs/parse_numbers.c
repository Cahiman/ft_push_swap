/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 18:23:22 by basianno          #+#    #+#             */
/*   Updated: 2026/11/27 18:38:21 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) == 1)
		i++;
	if (len == i)
		return (1);
	return (0);
}
