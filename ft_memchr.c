/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:32:53 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 20:46:48 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	i;
	unsigned char	*sc;

	*sc = s;
	i = 0;
	while (s && i < n)
	{
		if (sc[i] == c + 48)
			return (sc + i);
		i++;
	}
	return (NULL);
}
