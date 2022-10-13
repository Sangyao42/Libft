/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:26:30 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 18:06:49 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dest, char *src, unsigned long dessize)
{
	unsigned long	src_len;
	unsigned long	j;

	src_len = 0;
	j = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dessize != 0)
	{
		while (src[j] != '\0' && j < dessize -1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (src_len);
}
