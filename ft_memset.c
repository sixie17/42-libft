/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:23:17 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 16:37:46 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	long long int		i;
	unsigned char		*r;

	i = 0;
	r = (unsigned char *)b;
	while (i < (long long int)len)
	{
		r[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
