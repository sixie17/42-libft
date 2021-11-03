/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:43 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 20:11:27 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*r;
	const char	*n;

	i = ft_strlen(s);;
	r = (char *)s;
	n = &s[i];
	if (c == '\0')
		return ((char *)n);
	while (i--)
	{	
		if (c == (r[i]))
			return (&r[i]);
	}
	return (0);
}
