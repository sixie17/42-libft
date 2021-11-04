/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:11:58 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/04 18:02:12 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(buff) - 1;
	k = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break;
	}
	while (ft_strchr(set, s1[j]) && j)
		j--;
	buff = ft_calloc(j - i + 3, sizeof(char));
	if (!buff)
		return (0);
	while (k < j + 1)
	{
		buff[k] = s1[i];
		i++;
		k++;
	}
	return (buff);
}
