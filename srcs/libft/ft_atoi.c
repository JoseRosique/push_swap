/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fede <fde-fede@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:37:54 by joseantonio       #+#    #+#             */
/*   Updated: 2022/10/12 12:15:07 by fde-fede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
long long	ft_atoi(const char *str)
{
	char	*ptr;
	long	nbr;
	int		sign;
	size_t	i;

	ptr = (char *)str;
	nbr = 0;
	sign = 1;
	if (*ptr == '-' && ptr++)
		sign *= -1;
	if (*ptr == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	i = 0;
	while (*ptr >= '0' && *ptr <= '9' && i++ < 10)
		nbr = nbr * 10 + *ptr++ - '0';
	if (*ptr != '\0' || nbr * sign > 2147483647 || nbr * sign < -2147483648)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (nbr * sign);
}
*/

long long	ft_atoi(const char *str)
{
	int			i;
	int			r;
	long long	result;

	i = 0;
	r = 1;
	result = 0;
	if (str[i] == '-')
		r = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < 0 && r == -1)
			return (1);
		if (result < 0 && r == 1)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (r * result);
}

long long	my_atoi(const char *str)
{
	int			i;
	int			r;
	long long	result;

	i = 0;
	r = 1;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < 0)
			return (-1);
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (r * result);
}
/*
static	int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

long long	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	num *= sign;
	if (num != (int) num)
	{
		if (sign > 0)
			return (-1);
		return (0);
	}
	return ((int) num);
}
*/