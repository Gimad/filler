/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:56:03 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 19:14:24 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*ret;
	size_t	size;

	size = ft_strlen(src);
	if (size > len)
		size = len;
	if (size != len)
		ft_memset(dst + size, '\0', len - size);
	ret = ft_memcpy(dst, src, size);
	return (ret);
}
