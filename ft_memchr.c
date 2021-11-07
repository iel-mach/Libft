/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:49:27 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 17:21:34 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *)s;
    
    while(i < n)
    {
        if(str[i] == (unsigned char)c)
            return(&str[i]);
        i++;
    }
    return(NULL);
}

int main()
{
    char s[] = {0, 1, 2 ,3 ,4 ,5};
    printf("%s\n",ft_memchr(s, 4, 5));
}