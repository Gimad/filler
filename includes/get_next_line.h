/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:33:32 by sberic            #+#    #+#             */
/*   Updated: 2019/10/09 17:41:48 by sberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "filler.h"

# define BUFF_SIZE 512
# if (BUFF_SIZE < 1)
#  error "BUFF_SIZE must be only positive"
# elif (BUFF_SIZE >= INT_MAX)
#  error "This BUFF_SIZE value may cause a stack overflow"
# endif

int		get_next_line(const int fd, char **line);
#endif
