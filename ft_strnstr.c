/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:46:52 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/16 02:05:15 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (len == 0 && !haystack && to_find)
		return (NULL);
	str = (char *)haystack;
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && ((i + j) < len))
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
