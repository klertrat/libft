/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:29:07 by klertrat          #+#    #+#             */
/*   Updated: 2022/09/19 09:03:52 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*ans;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	ans = dest;
	while (*s1 != '\0')
	{
		*dest = *s1;
		dest++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*dest = *s2;
		dest++;
		s2++;
	}
	*dest = '\0';
	return (ans);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("ugfh", "djj"));
}*/
