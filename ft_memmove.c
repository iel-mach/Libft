/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:57:00 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/15 01:32:22 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (a > b)
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
		return (a);
	}
	return (ft_memcpy(a, b, len));
}
