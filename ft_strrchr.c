/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:56 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/06 21:58:57 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *str;
    str = (char *) s;
    int i;
    
    i = ft_strlen(str) - 1;
    if (c == 0)
        return(str + ft_strlen(str));
    while(str[i])
    {
        if(str[i] == c)
            return(&str[i]);
        i--;
    }
    return(0);
}