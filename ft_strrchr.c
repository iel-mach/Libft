/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:56 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 17:54:24 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *str;
    int i;

    

    str = (char *) s;
    i = ft_strlen(s);
    if (c == 0)
        return(str + ft_strlen(str));
    while(i >= 0)
    {
        if(str[i] == c)
            return(&str[i]);
        i--;
    }
    return(0);
}