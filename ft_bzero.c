/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:14:56 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/08 22:25:37 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	if (n == 0)
		return ;
	while (n-- > 0)
		a[i++] = 0;
	s = a;
}*/
void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, 0, n);
}
/*
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*y;
	size_t			x;

	x = 0;
	y = (unsigned char *)s;
	while (x < n)
	{
		y[x] = 0;
		x++;
	}
	s = y;
}
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}*/
