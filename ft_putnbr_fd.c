/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:06:15 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/10 21:37:41 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_change(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n && fd < 0)
		return ;
	if (n < 0)
		write(fd, "-", 1);
	nbr = ft_change(n);
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}
