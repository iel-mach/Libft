/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:40 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/05 10:37:56 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *a;
    size_t i;

    i = 0;
    a = (unsigned char *)b;
    while(i < len)
    {
        a[i] = c;
        i++;
    }
    return (a);

}