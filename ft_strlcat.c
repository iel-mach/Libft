/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:26:32 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/04 12:35:26 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	char *src1;
	src1 = (char *) src;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src1);
	if (size == 0)
		return (src_len);
	while (src1[i] && (i + dst_len) < (size - 1))
	{
		dst[dst_len + i] = src1[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
}