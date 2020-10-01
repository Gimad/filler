/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:39:39 by sberic            #+#    #+#             */
/*   Updated: 2019/09/06 15:54:07 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_s;
	char *s2;

	new_s = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	s2 = 0;
	if (new_s)
	{
		s2 = new_s;
		while (*s1)
			*new_s++ = *s1++;
		*new_s = '\0';
	}
	return (s2);
}
