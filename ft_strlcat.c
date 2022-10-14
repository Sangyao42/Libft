/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:17:15 by sawang            #+#    #+#             */
/*   Updated: 2022/10/14 22:01:12 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	dstlen;
	unsigned long	srclen;
	unsigned long	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize != 0 && dstlen <= dstsize)
	{
		while (src[i] != '\0' && i < (dstsize - dstlen - 1))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + srclen);
	}
	return (dstsize + srclen);
}

//size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
//what is restrict??
