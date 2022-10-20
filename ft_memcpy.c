/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:48:12 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 20:19:26 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
/*
int	main()
{
	char str1[] = "yogurtt";
	char str2[] = "Earn";
	printf("str1 before memcpy ");
	printf("%s", str1);
	memcpy (str1, str2, sizeof(str2));
 	printf("\nstr1 after memcpy ");
	printf("%s", str1);
 	return 0;
}*/
