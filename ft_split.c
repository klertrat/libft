/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:33:09 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 19:55:27 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

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
	return (count);
}

char	*find_word(const char *str, int index, int end)
{
	int    i;
	char    *word;

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
	int		tempi;
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
		if (i == 0 || (s[i] != '\0' && s[i] != c && s[i - 1] == c))
		{
			tempi = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			ans[j++] = find_word(s, tempi, i);
		}
	}
	ans[j] = 0;
	return (ans);
}
/*
int	main(int argc, char **argv)
{
	int		index;
	char	*real;
	char	**result;

	index = 0;
	if (argc == 2)
	{
		result = ft_split(argv[1], 'i');
		*real = split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
		while (result[index] && real[index])
		{
			printf("%s\t", result[index]);
			printf("%c\n", real[index]);
			index++;
		}
	}
	return (0);
}*/
