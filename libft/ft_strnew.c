/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:21:53 by sberic            #+#    #+#             */
/*   Updated: 2019/09/16 17:22:19 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (size + 1 == 0)
		return (NULL);
	s = (char*)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
