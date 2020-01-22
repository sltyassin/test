/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:22:47 by yslati            #+#    #+#             */
/*   Updated: 2020/01/22 16:38:36 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line.c"
#include "get_next_line_utils.c"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	//int fd;
	char *line;
	int r = 1;
	
	//fd = open(0, O_RDONLY);
	while (r == 1)
	{
		r = get_next_line(&line);
		printf("%d - %s\n", r, line);
		free(line);
	}
	return (0);
}
//yassin