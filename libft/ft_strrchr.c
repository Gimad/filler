/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:36:26 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 18:20:38 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				len;

	ch = (unsigned char)c;
	len = ft_strlen(s);
	s += len;
	if (ch == '\0')
		return ((char*)s);
	while (len + 1)
	{
		if ((unsigned char)*s == ch)
			return ((char*)s);
		s--;
		len--;
	}
	return (0);
}
