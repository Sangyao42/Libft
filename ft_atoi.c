/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:00:54 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 18:01:39 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	sign;
	int	value;
	int	i;

	sign = 1;
	while (is_non_space(*str) == 1)
		str = str + 1;
	if (*str == '-')
	{
		sign = -1;
		str = str + 1;
	}
	if (*str == '+')
		str = str + 1;
	i = 0;
	value = 0;
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		value = 10 * value;
		value = value + str[i] - 48;
		i++;
	}
	return (value * sign);
}
