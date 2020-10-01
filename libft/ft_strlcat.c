/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:26:18 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 20:19:48 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	c;
	size_t	ret;

	len_dest = ft_strlen(dst);
	ret = ft_strlen(src);
	c = 0;
	if (size == 0)
		return (ret);
	if (size < len_dest)
		ret += size;
	else
		ret += len_dest;
	while ((src[c] != '\0') && (len_dest < size - 1) && (dst != src))
	{
		dst[len_dest] = src[c];
		c++;
		len_dest++;
	}
	dst[len_dest] = '\0';
	return (ret);
}
