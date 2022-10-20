/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:48:05 by sawang            #+#    #+#             */
/*   Updated: 2022/10/18 18:46:18 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	size_t			i;

	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (c_dst < c_src)
	{
		i = 0;
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			c_dst[len - 1 - i] = c_src[len - 1 - i];
			i++;
		}
	}
	return (c_dst);
}

// int main(void)
// {
// 	char dst[] = "destination";
// 	char *src = dst + 4;
// 	//src = dst +4;

// 	// printf("this is rst : %s\n", src);
// 	// printf("this is rst : %s\n", dst);
//  	// memmove(dst, src,11);
// 	// printf("this is rst : %s\n", dst);

// 	ft_memmove(dst, src, -1);
// 	printf("this is my_rst: %s\n", dst);
// }
