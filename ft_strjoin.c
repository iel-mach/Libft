/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:48:35 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/10 18:26:10 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		i;
	int		j;
	char	*x;
	
	i = 0;
	j = 0;
	
	if (s1 == 0 || s2 == 0)
		return (0);
	x = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!x)
		return (0);
	while (s1[i])
	{
		x[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		x[i] = s2[j];
		j++;
		i++;
	}
	x[i] = '\0';
	return (x);
}

/*int main()
{
	printf("%s\n", ft_strjoin("",""));
}*/
