/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:21:33 by sawang            #+#    #+#             */
/*   Updated: 2022/10/13 18:07:57 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
