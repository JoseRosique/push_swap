/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:29:39 by joslopez		    #+#    #+#            */
/*   Updated: 2022/09/21 14:43:35 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_isnumber(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '-')
		i++;
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isduplicate(t_stacks *stacks, int number)
{
	int	size;
	int	i;

	i = 0;
	size = stacks->stack_a.used_size;
	if (size == 0)
		return (1);
	while (i < size)
	{
		if (stacks->stack_a.vector[i] == number)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//Comprobamos que el argumento no está ordenado.
int	ft_issorted(t_vector *vector)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = vector->vector;
	while (i < vector->used_size - 1)
	{
		if (tmp[i] > tmp[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_numbers(char *string)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

int	ft_put_err(t_stacks *stacks, char *message, int ret)
{
	if (stacks)
	{
		if (stacks->stack_a.vector)
			free(stacks->stack_a.vector);
		if (stacks->stack_b.vector)
			free(stacks->stack_b.vector);
	}
	if (message != NULL)
		ft_putendl_fd(message, 2);
	return (ret);
}
