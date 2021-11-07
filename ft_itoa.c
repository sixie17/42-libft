/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:31:17 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/07 14:54:53 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*all(int n)
{
	long long int	n2;
	char			*ret;
	size_t			i;

	n2 = (long long int) n;
	if (n < 0)
	{
		n2 = -n2;
		i = numlen(n2) + 2;
		ret = (char *) ft_calloc(i, sizeof(char));
		if (!ret)
			return (NULL);
	}
	else
	{
		i = numlen(n) + 1;
		ret = (char *)ft_calloc(i, sizeof(char));
		if (!ret)
			return (NULL);
	}
	ret[0] = '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	size_t			i;
	char			*ret;
	long long int	n2;

	ret = all(n);
	i = numlen(n);
	n2 = (long long int) n;
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		n2 = -n2;
		ret[0] = '-';
		i++;
	}
	while (n2 && i--)
	{
		ret[i] = (n2 % 10) + '0';
		n2 /= 10;
	}
	return (ret);
}
