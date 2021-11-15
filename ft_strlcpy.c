/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:49 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/15 05:21:30 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src1, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src1);
	if (size == 0)
		return (len);
	while (src1[i] && (i < size - 1))
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = ('\0');
	return (len);
}
