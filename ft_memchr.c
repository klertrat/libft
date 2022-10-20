/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:16:26 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 22:20:51 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	if (!n)
		return (0);
	while (n > 0)
	{
		if (*a == (unsigned char)c)
			return ((void *)a);
		n--;
		a++;
	}
	return (NULL);
}
