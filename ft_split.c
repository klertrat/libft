/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:33:09 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/27 22:28:15 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	**ft_free(char **ans)
{
	size_t	i;

	i = 0;
	while (ans[i])
	{
		free(ans[i]);
		i++;
	}
	free(ans);
	return (NULL);
}

static size_t	ft_count(const char *str, char c)
{
	size_t	count;
	size_t	i;
	size_t	sw;

	count = 0;
	sw = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] != '\0'))
			count++;
		if (str[i] == c)
			sw = 1;
		str++;
	}
	if (count == 0 && sw == 0)
		count += 1;
	return (count);
}

size_t	findend(const char *str, size_t index, char c)
{
	while (str[index] != '\0' && str[index] != c)
			index++;
	return (index);
}

char	*find_word(const char *str, size_t index, char c)
{
	size_t	i;
	size_t	tempindex;
	size_t	end;
	char	*word;

	i = 0;
	tempindex = index;
	while (str[tempindex] != '\0' && str[tempindex] != c)
			tempindex++;
	end = tempindex;
	if (end == index)
		return (0);
	word = malloc(end - index + 1);
	if (!word)
		return (0);
	while (index < end)
		word[i++] = str[index++];
	word[i] = 0;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ans;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	ans = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!ans)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			ans[j++] = find_word(s, i, c);
			if (!ans[j - 1])
				return (ft_free(ans));
			i = findend(s, i, c);
		}
	}
	return (ans);
}
