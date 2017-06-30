/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_segments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2015/02/16 14:46:30 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_otool.h"

static struct section_64		*st_get_text_section(
	struct segment_command_64 *segment, int u)
{
	struct section_64			*sect;
	unsigned int				i;

	(void)u;
	sect = (struct section_64 *)((char *)segment
			+ sizeof(struct segment_command_64));
	i = 0;
	while (i < segment->nsects)
	{
		if (!ft_strcmp(sect->sectname, "__text"))
			return (sect);
		++i;
		++sect;
	}
	return (NULL);
}

int								ft_loop_segments(unsigned int ncmds, void *buf)
{
	struct load_command			*cmd;
	struct segment_command_64	*segment;
	struct section_64			*sect;
	unsigned int				i;

	i = 0;
	cmd = (struct load_command *)(((char *)buf)
			+ sizeof(struct mach_header_64));
	while (i < ncmds)
	{
		if (cmd->cmd == LC_SEGMENT_64)
		{
			segment = (struct segment_command_64 *)cmd;
			if (NULL != (sect = st_get_text_section(segment, 0)))
			{
				ft_show(sect, buf);
				break ;
			}
		}
		cmd = (struct load_command *)(((char *)cmd) + cmd->cmdsize);
		++i;
	}
	return (OK);
}
