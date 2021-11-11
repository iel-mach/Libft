/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:25:22 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/11 00:15:13 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int min(int n)
// {
// 	if(n < -2147483648)
// // }
char *ft_itoa(int n)
{
    int   j;
    int   i;
    char  *x;
    long int   nb;

    i = 0;
    j = 0;
    if (n == 0)
      return(ft_strdup("0"));
    if (n < 0)
    {
        n *= (-1);
        j++;
        i++;
    }
    nb = (long int)n;
    while (nb > 0)
    {
        nb = nb / 10;
        i++;
    }
    x = malloc ((i + 1) * sizeof(char));
	if (!x)
		return (NULL);
    if (j)
    {
        x[0] = '-';
    }
    x[i] = '\0';
    i--;
    while (i + 1 > 0 && n)
    {
        x[i--] = (n % 10) + 48;
        n = n / 10;
    }
    return(x);
}
int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}