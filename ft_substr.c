/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:02:06 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/04 15:26:25 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	l;

	l = ft_strlen(s);
	buff = (char *)ft_calloc(len + 1, sizeof(char));
	if (!buff)
		return (0);
	if (start >= l)
		return (buff);
	ft_memcpy (buff, &s[start], len);
	return (buff);
}
