/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:30:53 by joslopez	       #+#    #+#             */
/*   Updated: 2022/09/21 14:45:26 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_find_smallest_number_ten(t_stacks *stacks)
{
	int	s_index;

	s_index = ft_get_smallest_index(&stacks->stack_a);
	while (s_index != 0)
	{
		if (s_index <= 5)
			ft_rotate_a(&stacks->stack_a, YES);
		else
			ft_reverse_rotate_a(&stacks->stack_a, YES);
		s_index = ft_get_smallest_index(&stacks->stack_a);
	}
}

void	ft_sort_ten_numbers(t_stacks *stacks)
{
	if (!ft_issorted(&stacks->stack_a))
	{
		while (stacks->stack_a.used_size != 5)
		{
			ft_find_smallest_number_ten(stacks);
			ft_push_b(stacks, YES);
		}
		ft_sort_five_numbers(stacks);
		while (stacks->stack_a.used_size != stacks->stack_a.size)
			ft_push_a(stacks, YES);
	}
}
