/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 14:58:44 by yslati            #+#    #+#             */
/*   Updated: 2020/01/22 16:41:44 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					fill_line(char **line, char **stc)
{
	int				len;
	char			*tmp;

	if (*stc)
		len = line_len(*stc);
	if (*stc && (len < (int)ft_strlen(*stc)))
	{
		tmp = ft_strjoin(*line, *stc, '\n');
		free(*line);
		*line = tmp;
		tmp = ft_strdup(*stc + len + 1);
		free(*stc);
		*stc = tmp;
		return (1);
	}
	else if (*stc && (len == (int)ft_strlen(*stc)))
	{
		tmp = ft_strjoin(*line, *stc, '\0');
		free(*line);
		*line = tmp;
		free(*stc);
		*stc = NULL;
		return (0);
	}
	free(*stc);
	return (0);
}

int					get_next_line(char **line)
{
	static char		*stc;
	char			*buff;
	char			*tmp;
	int				r;

	if (!line  || !(*line = ft_strdup("")))
		return (-1);
	if (!(buff = malloc(BUFFER_SIZE + 1)))
		return (-1);
	if (!stc)
		stc = ft_strdup("");
	while ((r = read(0, buff, BUFFER_SIZE)) > 0)
	{
		buff[r] = '\0';
		tmp = ft_strjoin(stc, buff, '\0');
		free(stc);
		stc = tmp;
		if (check_static(stc) == 1)
			break ;
	}
	//free(buff);
	if (r < 0)
		return (-1);
	return (fill_line(line, &stc));
}
//hrlllooo