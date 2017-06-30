/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:40:01 by tettouat          #+#    #+#             */
/*   Updated: 2015/02/16 14:31:34 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puttabl(char **tabl)
{
	int		i;

	i = 0;
	while (tabl[i] != '\0')
	{
		ft_putendl(tabl[i]);
		i++;
	}
}
