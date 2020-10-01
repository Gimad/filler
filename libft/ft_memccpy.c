/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:27:08 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 13:55:03 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*temp_d;
	const unsigned char *temp_s;

	temp_d = dst;
	temp_s = src;
	while (n--)
	{
		if ((*temp_d++ = *temp_s++) == (unsigned char)c)
			return (temp_d);
	}
	return (NULL);
}
