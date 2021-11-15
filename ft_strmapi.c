/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:48:18 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/15 05:23:57 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*x;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	x = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!x)
		return (NULL);
	while (s[i])
	{
		x[i] = f(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
