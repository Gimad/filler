/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:49:48 by sberic            #+#    #+#             */
/*   Updated: 2019/09/16 16:39:41 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX_INT 9223372036854775807

int		ft_atoi(const char *str)
{
	unsigned long long			s;
	int							n;

	s = 0;
	n = 1;
	str = ft_strscroll(str, ft_space);
	if (*str == '-')
		n = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		s = s * 10 + *str - '0';
		str++;
		if (s >= MAX_INT && n > 0)
			return (-1);
		if (s > MAX_INT && n < 0)
			return (0);
	}
	return (s * n);
}
