/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:54 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/05 12:33:47 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;

    if (n == 0)
        return(0);
    while(s1[i] && s2[i]  && (i < n - 1) && (s1[i] == s2[i]))
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main ()
{
    char *a = "‹abc";
    char *b = "acb";
    printf("%d\n",ft_strncmp(a,b,3));
}*/