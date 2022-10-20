/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:49:54 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/08 21:30:09 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len > 0)
	{
		*a++ = c;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	ft_memset(NULL, 'a', 12);
	return (0);
}*/
