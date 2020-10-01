/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:16:51 by sberic            #+#    #+#             */
/*   Updated: 2019/09/13 19:57:30 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int		st;
	int					e;

	if (s == NULL)
		return (NULL);
	st = 0;
	e = (int)ft_strlen(s) - 1;
	while ((s[st] == ' ' || s[st] == '\t' || s[st] == '\n') && s[st])
		st++;
	while ((s[e] == ' ' || s[e] == '\t' || s[e] == '\n')
		&& s[e] && e > (int)st)
		e--;
	return (ft_strsub(s, st, (e - st + 1)));
}
