/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:00:54 by sawang            #+#    #+#             */
/*   Updated: 2022/10/24 20:45:44 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_non_space(const char c)
{
	int		i;
	char	*space;

	i = 0;
	space = " \f\n\r\t\v";
	while (space[i] != '\0')
	{
		if (c == space[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	value;

	sign = 1;
	while (is_non_space(*str) == 1)
		str = str + 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str = str + 1;
	}
	value = 0;
	while (*str != '\0' && ('0' <= *str && *str <= '9'))
	{
		value = 10 * value;
		value = value + (*str - '0');
		// if (value < 0 && sign == -1)
		// 	return (0);
		// else if (value < 0 && sign == 1)
		// 	return (-1);
		str++;
	}
	return ((int) value * sign);
}
// 2147483640 + 8 = -2147483648
// -2147483648	* -1 = int 2147483648 = -2147483648
// 2147483647 -2147483648	-2147483647
