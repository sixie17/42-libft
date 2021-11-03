/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:41:33 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/02 16:20:42 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*tmp;

	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	tmp = (unsigned char *)ptr;
	while (count--)
		tmp[count] = 0;
	return (ptr);
}
