/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:18:06 by sawang            #+#    #+#             */
/*   Updated: 2022/10/14 22:03:05 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s);
	if (c == 0)
		return (s + s_len);
	i = 0;
	while (s[i] != '\0' && i < s_len)
	{
		if (c == s[i] - 48)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
