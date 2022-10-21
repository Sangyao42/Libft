/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:43:47 by sawang            #+#    #+#             */
/*   Updated: 2022/10/21 22:19:07 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// void    *ft_calloc(size_t count, size_t size)
// {
//     char    *result;
//     if ((count == 0 && size == 0) || (count == SIZE_MAX && size == SIZE_MAX))
//         return (NULL);
//     else
//     {
//         result = malloc(count * size);
//         ft_bzero(result, count * size);
//         return (result);
//     }
// }

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	if (count > SIZE_MAX / size)
		return (NULL);
	else
	{
		mem = malloc(count * size);
		if (mem)
		{
			i = 0;
			while (i < (count * size))
			{
				mem[i] = 0;
				i++;
			}
			return (mem);
		}
	}
	return (NULL);
}

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*temp;

// 	if (!count || !size)
// 	{
// 		count = 1;
// 		size = 1;
// 		//return (NULL);
// 	}
// 	if (size > (SIZE_MAX / count))
// 		return (NULL);
// 	temp = malloc(count * size);
// 	if (temp != 0)
// 		ft_memset(temp, 0, count * size);
// 	return (temp);
// }

// int main(void)
// {
// 	printf ("%zu\n", SIZE_MAX);
// 	char *str = (char *)malloc(SIZE_MAX);
// 	printf("%zu\n", strlen(str));
// 	free(str);
// }
