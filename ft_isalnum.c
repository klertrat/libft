/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:10:10 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/07 17:28:25 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || \
		(c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalnum(','));
	return 0;
}*/