/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:54:44 by sawang            #+#    #+#             */
/*   Updated: 2022/10/24 11:42:57 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*sub_str;

// 	i = 0;
//	//invalid operands to binary expression ('char **' and 'char *')
// 	while (i < len - start)
// 	{
// 		sub_str = (char *)malloc(sizeof(char));
// 		if (s[i + start] != '\0')
// 		{
// 			sub_str = sub_str + (char *)malloc(sizeof(char));
// 			sub_str[i - 1] = s[start];
// 			i++;
// 			start++;
// 		}
// 	}
// 	sub_str[i] = '\0';
// 	if (sub_str)
// 		return (sub_str);
// 	return (NULL);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t)start > s_len - 1)
		return (ft_strdup(""));
	if ((size_t)start + len > s_len)
		substr = (char *)malloc(s_len - (size_t)start + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && (size_t)start < s_len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
