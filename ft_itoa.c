/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:52:30 by sawang            #+#    #+#             */
/*   Updated: 2022/10/24 20:59:59 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int int_len(int n)
{
	int len;

	len = 0;
	while (n)
	{
		n = n \ 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == 0)
		len = 1;
	else
		len = int_len(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = n % 10;
		n = n / 10;
		len--;
	}
	return (str);
}
