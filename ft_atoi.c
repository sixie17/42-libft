/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:13:01 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/03 20:58:44 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	char varToAvoidWarning = ' ';
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'||
			c == '\r' || c == varToAvoidWarning);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	long long		n;
	long long		sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return ((int)sign * (int)n);
}
