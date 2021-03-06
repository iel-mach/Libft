/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:44 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/15 05:19:01 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	c = (char )c;
	i = 0;
	if (c == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
