/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otool.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:08:09 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_otool.h"

int								ft_otool(char *file_name, int show_name)
{
	void						*buf;
	struct mach_header_64		*header;

	(void)show_name;
	if (NULL == (buf = ft_get_buf(file_name)))
		return (ERR);
	header = (struct mach_header_64 *)buf;
	if (header->magic != 4277009103)
		return (OK);
	ft_putstr(file_name);
	ft_putendl(":");
	ft_putendl("(__TEXT,__text) section");
	return (ft_loop_segments(header->ncmds, buf));
}
