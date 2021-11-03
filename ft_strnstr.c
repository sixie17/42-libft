/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:57:35 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 20:34:10 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = ft_strlen(needle);
	if (!needle[i])
		return ((char *)haystack);
	while (i < len)
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (j < l && i + j < len)
			{
				if (needle[j] != haystack[i + j])
					break ;
				j++;
			}
			if (!needle[j])
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
