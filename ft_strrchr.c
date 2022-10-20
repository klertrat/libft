/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:07:04 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/20 17:05:13 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)s + a + 1);
	while (a >= 0 && s[a] != '\0')
	{
		if (s[a] == c)
			return ((char *)s + a);
		a--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", strrchr("hfh\0fg\0", '\0'));
	printf("%s\n", ft_strrchr("hfh\0fg\0", '\0'));
	return (0);
}*/
