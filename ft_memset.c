/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:29:21 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 20:32:34 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	i;
	unsigned char	*bc;

	*bc = b;
	i = 0;
	while (b && i < len)
	{
		bc[i] = c + 48;
		i++;
	}
	return (b);
}
