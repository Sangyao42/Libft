/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:08:23 by sawang            #+#    #+#             */
/*   Updated: 2022/10/18 16:51:48 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		s_len;
	char	*str;

	str = (char *)s;
	s_len = 0;
	while (str[s_len] != '\0')
		s_len++;
	if (c == 0)
		return (&str[s_len]);
	i = 0;
	while (s[i] != '\0' && i < s_len)
	{
		if (str[s_len - 1 - i] == (char) c)
		{
			return (&str[s_len - 1 - i]);
		}
		i++;
	}
	return (NULL);
}
