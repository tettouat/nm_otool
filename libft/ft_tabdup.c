/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:49:28 by tettouat          #+#    #+#             */
/*   Updated: 2015/03/03 17:22:15 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_tabdup(char **tabl)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_tablen(tabl) + 1));
	while (tabl[i] != '\0')
	{
		res[i] = ft_strdup(tabl[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
