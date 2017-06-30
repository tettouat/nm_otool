/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:09:46 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NM_H
# define FT_NM_H

# define OK			0
# define ERR		1

# define TRUE		1
# define FALSE		0

# define SYMB		((t_sym *) lst->content)

# include <mach-o/loader.h>
# include <mach-o/nlist.h>
# include "../libft/libft.h"

typedef struct				s_sym
{
	char					*name;
	void					*adr;
	char					type;
}							t_sym;

int							ft_nm(char *file_name, int print_name);
struct symtab_command		*ft_get_sym_tab(unsigned int ncmds, void *buf);
char						ft_get_type(struct nlist_64 symbol, void *buf);

int							ft_error(char *str);
void						*ft_nerror(char *str);
char						*ft_xlongtoa(long unsigned int n);
void						ft_printpad(char *str);
int							ft_order(t_list *node1, t_list *node2);

#endif
