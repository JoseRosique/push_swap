/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:30:23 by joslopez				#+#    #+#        */
/*   Updated: 2022/09/21 14:44:42 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

//Separamos los números en arrays individuales, tomamos el tamaño para reservar memoria con malloc, asignamos los valores en la estructura.
char	**ft_stacks_init(char *string, t_stacks *stacks)
{
	int		size;
	char	**numbers;

	numbers = ft_split(string, ' ');
	size = ft_count_numbers(string);
	if (string)
	{
		stacks->stack_a.vector = (int *)malloc(sizeof(int) * size);
		stacks->stack_b.vector = (int *)malloc(sizeof(int) * size);
	}
	else
		return (NULL);
	stacks->stack_a.size = size;
	stacks->stack_b.size = size;
	stacks->stack_a.used_size = 0;
	stacks->stack_b.used_size = 0;
	free(string);
	return (numbers);
}
//Comprobamos que lo guardado en los arrays es correcto, vamos guardando el valor en la variable de la estructura.
t_stacks	ft_store_numbers(char *string)
{
	t_stacks	stacks;
	char		**numbers;
	long long	number;
	int			i;

	i = 0;
	numbers = ft_stacks_init(string, &stacks);
	while (numbers[i])
	{
		if (!ft_isnumber(numbers[i]))
			exit(ft_put_err(&stacks, "Error", 0));
		number = ft_atoi(numbers[i]);
		if (number < -2147483648 || number > 2147483647)
			exit(ft_put_err(&stacks, "Error", 0));
		if (number < -2147483648 || number > 2147483647)
			exit(ft_put_err(&stacks, "Error", 0));
		if (!ft_isduplicate(&stacks, number))
			exit(ft_put_err(&stacks, "Error", 0));
		stacks.stack_a.vector[i] = number;
		stacks.stack_a.used_size++;
		free(numbers[i]);
		i++;
	}
	free(numbers);
	return (stacks);
}
//Comprobamos el tamaño del argumento.
int	ft_av_size(char **av)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (av[i])
		size += ft_strlen(av[i++]) + 1;
	return (size);
}
//Comprobamos que el argumento son todo números.
int	ft_check_arg(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_isdigit(av[i]))
			return (1);
		i++;
	}
	return (0);
}
//Pasamos todo el argumento a string.
//Con ft_strjoin vuelvo a comprobar la existencia del argumento y convierto los espacios a uno como separación de los números.
char	*ft_av_to_string(char **av)
{
	char	*string;
	char	*tmp;
	int		i;

	i = 1;
	string = (char *)malloc(1);
	while (av[i])
	{
		if (!ft_check_arg(av[i]))
			exit(ft_put_err(NULL, "Error", 0));
		else
		{
			tmp = ft_strjoin(string, av[i]);
			free(string);
			string = ft_strjoin(tmp, " ");
			free(tmp);
			i++;
		}
	}
	return (string);
}
