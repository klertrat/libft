/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:33:09 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/22 01:53:18 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count(const char *str, int c)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
			count++;
		str++;
	}
	if (count == 0)
		count += 1;
	return (count);
}

int	findend(const char *str, int index, char c)
{
	while (str[index] != '\0' && str[index] != c)
			index++;
	return (index);
}

char	*find_word(const char *str, int index, int end)
{
	int		i;
	char	*word;

	i = 0;
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
	int		i;
	int		j;
	int		end;
	char	**ans;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	ans = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!ans)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (i == 0 || s[i] != '\0')
		{
			end = findend(s, i, c);
			ans[j++] = find_word(s, i, end);
			i = end;
		}
	}
	ans[j] = 0;
	return (ans);
}
/*
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], ' ');
	index = 0;
	if (argc == 2)
	{
		while (split[index])
		{
			printf("%s\n", split[index]);
			index++;
		}
	}
	return (0);
}
*/
/*
int	main(void)
{
	int	index;
	char	**res;

	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	index = 0;
	while (res[index])
	{
		printf("%s\n", res[index]);
		index++;
	}
	return (0);
}*/
