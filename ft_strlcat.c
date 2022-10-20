/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <klertrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:58:51 by klertrat          #+#    #+#             */
/*   Updated: 2022/10/20 16:20:06 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(dst);
	if (i >= dstsize || (dstsize == 0 && *dst == '\0'))
		return (dstsize + ft_strlen(src));
	while (*src != '\0' && i < dstsize - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (i + ft_strlen(src));
}
