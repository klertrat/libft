/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:55:48 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/19 21:46:14 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	checklen(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	long	a;
	char	*result;

	len = checklen(n);
	a = n;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	if (a < 0)
	{
		result[0] = '-';
		a *= -1;
	}
	else if (a == 0)
		result[0] = '0';
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = (a % 10) + '0';
		if (n < 0 && len == 0)
			break ;
		a = a / 10;
	}
	return (result);
}
