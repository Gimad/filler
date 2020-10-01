/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:10:02 by sberic            #+#    #+#             */
/*   Updated: 2019/09/10 21:11:20 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len_h;
	int len_n;

	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	if (!len_n)
		return (char *)haystack;
	while (len_h >= len_n)
	{
		if (!ft_memcmp(haystack, needle, len_n))
			return (char *)haystack;
		haystack++;
		len_h--;
	}
	return (NULL);
}
