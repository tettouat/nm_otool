/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:09:16 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_otool.h"

int				main(int ac, char **av)
{
	int			ret;
	int			i;

	if (ac > 1)
	{
		i = 1;
		ret = OK;
		while (i < ac)
		{
			if (ERR == ft_otool(av[i], ac > 2))
				ret = ERR;
			++i;
		}
		return (ret);
	}
}
