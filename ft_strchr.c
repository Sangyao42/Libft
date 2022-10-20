/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:18:06 by sawang            #+#    #+#             */
/*   Updated: 2022/10/18 16:52:39 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	str = (char *)s;
	s_len = ft_strlen(str);
	if (c == 0)
		return (&str[s_len]);
	i = 0;
	while (str[i] != '\0' && i < s_len)
	{
		if (str[i] == (char) c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
