/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:08:01 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include "ft_otool.h"

static off_t				st_get_size(int fd)
{
	struct stat				buf;

	if (-1 == fstat(fd, &buf))
		return (ft_error("Can't fstat file"));
	return (buf.st_size);
}

void						*ft_get_buf(char *file_name)
{
	int						fd;
	int						size;
	void					*buf;

	if (-1 == (fd = open(file_name, O_RDONLY)))
		return (ft_nerror("Can't read file"));
	if (ERR == (size = st_get_size(fd)))
		return (NULL);
	if (MAP_FAILED == (buf = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0)))
		return (ft_nerror("Can't mmap file"));
	return (buf);
}
