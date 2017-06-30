/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlongtoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#             */
/*   Updated: 2014/07/10 18:09:59 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_length(long unsigned int n)
{
	int		length;

	length = (n == 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 16;
		length++;
	}
	return (length);
}

static void	norme_loop(char *str, long unsigned int *n, int *length)
{
	while ((*n) != 0)
	{
		if ((*n) % 16 > 9)
			str[(*length)] = (*n) % 16 + 'a' - 10;
		else
			str[(*length)] = (*n) % 16 + '0';
		(*n) = (*n) / 16;
		(*length)--;
	}
}

char		*ft_xlongtoa(long unsigned int n)
{
	char	*str;
	int		length;

	length = get_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str)
	{
		str[length] = '\0';
		length--;
		str[length] = '0';
		norme_loop(str, &n, &length);
	}
	return (str);
}
