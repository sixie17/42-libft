/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:30:15 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 13:34:44 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (!src && !dst)
		return (dst);
	while (i < n)
	{
		ft_memset(&dst[i], *((char *)(src + i)), 1);
		i++;
	}
		return (dst);
}
