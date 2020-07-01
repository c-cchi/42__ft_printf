/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:36:09 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 12:18:15 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] && c != '\0')
	{
		if (temp[i] == (char)c)
			return (&temp[i]);
		i++;
	}
	if (c == '\0')
	{
		while (temp[i])
			i++;
		return (&temp[i]);
	}
	return (0);
}
