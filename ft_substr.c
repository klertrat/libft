/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:51:53 by klertrat          #+#    #+#             */
/*   Updated: 2022/09/04 12:17:02 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !dest)
		return (NULL);
	if (start > ft_strlen(s))
	{
		dest[0] = '\0';
		return (dest);
	}
	while (i < len && s[start] != '\0')
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char* str;
	str = ft_substr("HelloTongNOOOOO", 4, 5);
	printf("%s\n", str);
	return 0;
}*/
