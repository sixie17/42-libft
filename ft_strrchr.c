/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:43 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 11:58:25 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*r;

	i = ft_strlen(s);
	r = (char *)s;
	while (i--)
	{	
		if (c == (int)(r[i]))
			return (&r[i]);
	}
	return (0);
}
