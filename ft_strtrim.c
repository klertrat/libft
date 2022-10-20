/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:59:45 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/20 19:46:29 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	check(char const s1, char const *set)
{
	while (*set && s1)
	{
		if (s1 == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		i;
	int		last;
	char	*str1;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	while (check(s1[start], set) == 1 && s1[start] != '\0')
		start++;
	last = ft_strlen(s1);
	while (check(s1[last - 1], set) == 1)
		last--;
	str1 = malloc(last - start + 1);
	if (!str1)
		return (0);
	while (start < last)
		str1[i++] = s1[start++];
	str1[i] = '\0';
	return (str1);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("          ", " "));
	//printf("%s\n", ft_strtrim(" lorem ipsum dolor sit amet", "l"));
	printf("%s\n", ft_strtrim("xyzavocadoyz", "xyz"));
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	return 0;
}*/
