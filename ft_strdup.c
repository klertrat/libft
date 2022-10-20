/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:44:23 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 23:30:46 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	int		a;
	char	*res;

	a = 0;
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[a])
	{
		res[a] = s[a];
		a++;
	}
	res[a] = '\0';
	return (res);
}
/*
int main()
{
   char *str = "Hell \0 oworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}*/
