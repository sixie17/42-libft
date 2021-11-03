/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:49:27 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/02 18:11:44 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize < ft_strlen(dst) + 1)
		return (ft_strlen(src) + dstsize);
	while (j < i)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (i + ft_strlen(src));
}
