/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:11:36 by sberic            #+#    #+#             */
/*   Updated: 2019/09/13 20:07:00 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counts(char const *s, char c)
{
	size_t word;

	word = 0;
	if (!s || *s == '\0')
		return (0);
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			word++;
		s++;
	}
	return (word);
}

static size_t	len_word(char const *s, char c)
{
	size_t l;

	l = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s != c && (*(s + 1) == '\0' || *(s + 1) == c))
		{
			l++;
			break ;
		}
		if (*s != c)
			l++;
		s++;
	}
	return (l);
}

static char		**free_str(char **s)
{
	while (*s)
	{
		free(*s);
		s++;
	}
	free(s);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**sp;
	char	**res;
	size_t	l;

	if (s == NULL || (sp = malloc(sizeof(char*) * counts(s, c) + 1)) == NULL)
		return (NULL);
	res = sp;
	while (*s)
	{
		if (*s != c && *s != '\0')
		{
			l = len_word(s, c);
			if ((*sp = ft_strnew(l)) == NULL)
				return (free_str(res));
			ft_memcpy(*sp, s, l);
			s += (l - 1);
			sp++;
		}
		s++;
	}
	*sp = NULL;
	return (res);
}
