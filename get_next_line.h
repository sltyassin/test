/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 14:54:11 by yslati            #+#    #+#             */
/*   Updated: 2020/01/22 16:30:32 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

#  define BUFFER_SIZE 46

size_t					ft_strlen(const char *str);
int						check_static(char *t);
int						line_len(const char *str);
char					*ft_strjoin(char *line, char *stc, char c);
char					*ft_strdup(const char *s1);
int						fill_line(char **line, char **stc);
int						get_next_line(char **line);

#endif
