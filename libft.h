/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:20:37 by sawang            #+#    #+#             */
/*   Updated: 2022/10/14 20:54:45 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
#define _LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
unsigned long	ft_strlen(char *str);
unsigned long	ft_strlcpy(char *dest, char *src, unsigned long dessize);
int	ft_strncmp(char *s1, char *s2, unsigned long n);
int	ft_atoi(const char *str);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize);

#endif
