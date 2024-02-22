/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:29:34 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/12 14:53:36 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*get_file(char *path)
{
	int		fd;
	char	*buf;
	int		bytes;

	fd = open(path, O_RDONLY);
	buf = (char *)malloc(691);
	bytes = read(fd, buf, 691);
	close(fd);
	return (buf);
}
