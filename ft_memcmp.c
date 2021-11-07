/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:10:27 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 20:21:44 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char *str1;
    char *str2;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    if (n == 0)
        return(0);
    while(i < n - 1 && (str1[i] == str2[i]))
        i++;
    return((unsigned char)str1[i] - (unsigned char)str2[i]);
}