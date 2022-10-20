/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:46:57 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/20 13:12:35 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	check(const char *hay, size_t start, const char *need)
{
	size_t	i;

	i = 0;
	while (hay[start] == need[i])
	{
		start++;
		i++;
	}
	if (i == ft_strlen(need))
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && len >= 0)
	{
		if (len < ft_strlen(needle))
			return (0);
		else if (haystack[i] == needle[0])
		{
			if (check(haystack, i, needle) == 1)
				return ((char *)haystack + i);
		}
		len--;
		i++;
	}
	return (0);
}
