/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:09:50 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

int					ft_order(t_list *node1, t_list *node2)
{
	t_sym			*sym1;
	t_sym			*sym2;

	if (!node1 || !node2)
		return (0);
	sym1 = (t_sym *)node1->content;
	sym2 = (t_sym *)node2->content;
	if (ft_strcmp(sym1->name, sym2->name) > 0)
		return (1);
	return (0);
}
