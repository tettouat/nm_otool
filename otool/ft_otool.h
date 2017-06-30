/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otool.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:08:14 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OTOOL_H
# define FT_OTOOL_H

# define OK			0
# define ERR		1

# define TRUE		1
# define FALSE		0

# include <stdlib.h>
# include <mach-o/loader.h>
# include "../libft/libft.h"

int								ft_otool(char *file_name, int show_name);
void							*ft_get_buf(char *file_name);
int								ft_loop_segments(unsigned int ncmds, void *buf);
char							*ft_xlongtoa(long unsigned int n);
void							ft_show(struct section_64 *sect, void *buf);

int								ft_error(char *str);
void							*ft_nerror(char *str);
void							ft_printpad(char *str);

#endif
