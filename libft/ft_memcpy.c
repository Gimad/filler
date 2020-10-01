/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:36:08 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 13:29:25 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *temp;

	temp = dst;
	if ((char*)dst == 0 && (char*)src == 0)
		return (NULL);
	while (n--)
		*((unsigned char*)dst++) = *((unsigned char*)src++);
	return (temp);
}
