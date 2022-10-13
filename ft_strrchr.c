/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:08:23 by sawang            #+#    #+#             */
/*   Updated: 2022/10/12 11:52:35 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (c == 0)
		return (s + s_len);
	i = 0;
	while (s[i] != '\0' && i < s_len)
	{
		if (c == s[s_len - 1 - i] - 48)
		{
			return (s + s_len - 1 - i);
		}
		i++;
	}
	return (NULL);
}
