/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:33:17 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/04 16:56:51 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*buff;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2 + 1;
	buff = ft_calloc(size, sizeof(char));
	i = 0;
	if (!buff)
		return (0);
	while (i < len_s1)
	{
		buff[i] = s1[i];
		i++;
	}
	while (i < size - 1)
	{
		buff[i] = s2[i - len_s1];
		i++;
	}
	return (buff);
}
