/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:54:44 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 21:20:45 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*r;

	i = count * size;
	r = malloc(i);
	if (r == 0)
		return (NULL);
	ft_bzero(r, i);
	return (r);
}
