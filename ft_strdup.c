/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:35:06 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 16:40:07 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int		i;
	size_t  s;
	char	*t;
    char    *src;

    src = (char *)s1;
	s = ft_strlen(src);
	t = malloc ((s + 1) * sizeof (char));
	if (!t)
        return NULL;
	i = 0;
	while (src[i])
	{
        t[i] = src[i];
		i++;
    }
	t[i] = '\0';
	return (t);
}