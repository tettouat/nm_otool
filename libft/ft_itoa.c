/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:15:58 by tettouat          #+#    #+#             */
/*   Updated: 2015/02/16 14:31:05 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenofnbr(int n)
{
	size_t	i;

	i = 2;
	if (n == -2147483648)
		return (12);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void		ft_straddchar(char *s1, char c)
{
	s1[0] = c;
	s1[1] = '\0';
}

static void		ft_strcal(char *str, int n)
{
	if (n < 0)
	{
		ft_straddchar(ft_strchr(str, '\0'), '-');
		n = n * -1;
	}
	if (n < 10)
		ft_straddchar(ft_strchr(str, '\0'), '0' + n);
	else
	{
		ft_strcal(str, n / 10);
		ft_straddchar(ft_strchr(str, '\0'), '0' + n % 10);
	}
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = ft_lenofnbr(n);
	str = (char *)malloc(len * sizeof(char));
	if (str)
	{
		ft_bzero(str, len);
		if (n == -2147483648)
			return (ft_strcat(str, "-2147483648"));
		ft_strcal(str, n);
	}
	return (str);
}
