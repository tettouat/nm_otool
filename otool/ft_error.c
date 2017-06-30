/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2015/02/23 16:14:22 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_otool.h"

int				ft_error(char *str)
{
	ft_putstr_fd("ft_otool: error: ", 2);
	ft_putendl_fd(str, 2);
	return (ERR);
}

void			*ft_nerror(char *str)
{
	ft_putstr_fd("ft_otool: error: ", 2);
	ft_putendl_fd(str, 2);
	return (NULL);
}
