/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:17:47 by sawang            #+#    #+#             */
/*   Updated: 2022/10/21 23:40:34 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	offset;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	needle_len = ft_strlen(needle);
	printf("%zu\n", needle_len);
	if (len < ft_strlen(needle))
		return (NULL);
	if (len <= ft_strlen(haystack))
		offset = len - ft_strlen(needle) + 1;
	else
		offset = ft_strlen(haystack) - ft_strlen(needle) + 1;
	i = 0;
	printf("%zu\n", (len - ft_strlen(needle) + 1));
	printf("%zu\n", (ft_strlen(haystack) - ft_strlen(needle) + 1));
	printf("%zu\n", offset);
	while (i < offset)
	{
		if (!ft_strncmp((haystack + i), needle, needle_len))
		{
			printf("HI");
			printf("%zu\n", i);
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// //	size_t	j;
// 	size_t	max_len;

// 	if (!*needle)
// 		return ((char *)haystack);
// 	if (len <= 0)
// 		return (NULL);
// 	if (!*haystack)
// 		return (NULL);
// 	i = 0;
// //	j = 0;
// 	if (len >= ft_strlen(haystack))
// 		max_len = ft_strlen(haystack);
// 	else
// 		max_len = len;
// 	while (
// 		i < max_len - ft_strlen(needle) + 1)
// 	{
// 		if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
// 			return ((char *)(haystack + i));
// 		i++;
// 	}
// 	return (NULL);
// }

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

int main(void)
{
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	//char * empty = (char*)"";
// 	/* 2 */ char *haystack0 = strnstr(haystack, needle, -1);
// 	/* 3 */ char *haystack1 = strnstr(haystack, "a", -1);
// 	char *haystack_test = trnstr(haystack, needle, -1);
// 	printf("%s\n", haystack0);
// 	printf("%s\n", haystack1);
	char	*s1 = "FF";
			char	*s2 = "see F your F return F now F";
			size_t	max = strlen(s2);

			char	*i1 = strnstr(s1, s2, max);
			char	*i2 = ft_strnstr(s1, s2, max);
		printf("%s\n", i1);
		printf("%s\n", i2);
}

