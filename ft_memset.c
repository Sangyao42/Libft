/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:29:21 by sawang            #+#    #+#             */
/*   Updated: 2022/10/18 16:54:24 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bc;

	bc = (unsigned char *) b;
	i = 0;
	while (bc && i < len)
	{
		bc[i] = (unsigned char) c;
		i++;
	}
	return (bc);
}
