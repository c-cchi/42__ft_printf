/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:49:16 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 18:24:12 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] == s2[i]) && n > i && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		if (s1[i] == 0 || s2[i] == 0)
			return (0);
		i++;
	}
	if (s1[i] != s2[i] && n > i)
		return (0);
	return (1);
}
