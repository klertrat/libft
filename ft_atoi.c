/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:44:38 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 22:05:11 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 1;
	b = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || \
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b *= 10;
		b += str[i] - '0';
		i++;
	}
	return (b * a);
}
