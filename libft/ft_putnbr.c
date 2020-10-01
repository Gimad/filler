/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:04:21 by sberic            #+#    #+#             */
/*   Updated: 2019/09/13 21:05:02 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	new;

	if (n < 0)
	{
		new = -n;
		ft_putchar('-');
	}
	else
		new = n;
	if (new >= 10)
	{
		ft_putnbr(new / 10);
		ft_putchar(new % 10 + '0');
	}
	else
		ft_putchar(new + '0');
}
