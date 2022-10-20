/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:17:47 by sawang            #+#    #+#             */
/*   Updated: 2022/10/20 23:10:54 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

//size_t	ft_strlen(const char *str);

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	offset;

// 	if (!*needle)
// 		return ((char *)haystack);
// 	if (!*haystack)
// 		return (NULL);
// 	if (len < ft_strlen(needle))
// 		return (NULL);
// 	if (len <= ft_strlen(haystack))
// 		offset = len - ft_strlen(needle) + 1;
// 	else
// 		offset = ft_strlen(haystack) - ft_strlen(needle) + 1;
// 	i = 0;
// 	while (i < offset)
// 	{
// 		if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
// 			return ((char *)(haystack + i));
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
//	size_t	j;
	size_t	max_len;

	if (!*needle)
		return ((char *)haystack);
	if (len <= 0)
		return (NULL);
	if (!*haystack)
		return (NULL);
	i = 0;
//	j = 0;
	if (len >= ft_strlen(haystack))
		max_len = ft_strlen(haystack);
	else
		max_len = len;
	while (
		i < max_len - ft_strlen(needle) + 1)
	{
		if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	j = 0;
// 	if (!needle)
// 		return ((char *)haystack);
// 	while (haystack[i])
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && i + j < len)
// 		{
// 			j++;
// 			if (needle[j] == '\0')
// 				return (char *)&haystack[j];
// 		}
// 		i++;
// 	}
// }

// int main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	//char * empty = (char*)"";
// 	/* 2 */ char *haystack0 = strnstr(haystack, needle, -1);
// 	/* 3 */ char *haystack1 = strnstr(haystack, "a", -1);
// 	char *haystack_test = trnstr(haystack, needle, -1);
// 	printf("%s\n", haystack0);
// 	printf("%s\n", haystack1);
// }
