/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:17:47 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 18:49:18 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(char *str)
{
	unsigned long	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned long n)
{
	unsigned long	i;
	int				ret_val;

	i = 0;
	ret_val = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		ret_val = s1[i] - s2[i];
		if (ret_val != 0)
			return (ret_val);
		else
			ret_val = 0;
		i++;
	}
	return (ret_val);
}

char	*strnstr(const char *haystack, const char *needle, unsigned long len)
{
	unsigned long	i;
	unsigned long	haystacklen;
	unsigned long	needlelen;
	unsigned long	to_find_len;

	haystacklen = ft_strlen(haystack);
	needlelen = ft_strlen(needle);
	if (needle[0] == '\0')
		return (haystack);
	if (len > needlelen)
		to_find_len == needlelen;
	else
		to_find_len == len;
	i = 0;
	while (needle[0] != '\0' && i < (haystacklen - to_find_len + 1))
	{
		if (ft_strncmp(haystack + i, needle, to_find_len) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
