/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:21:08 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/02 18:04:06 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		if (r[i] == (unsigned char) c)
			return (&r[i]);
		i++;
	}
	return (0);
}
