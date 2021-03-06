/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:02:11 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/15 05:23:31 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(char const *s, char c)
{
	int	x;
	int	i;
	int	count;

	x = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			x = 0;
		else if (x == 0)
		{
			x = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	countchar(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		if (s[i] != c)
			j++;
		i++;
	}
	return (j);
}

char	*ft_stock(char const *s, char c)
{
	char	*w;
	int		i;
	int		j;

	i = 0;
	j = countchar(s, c);
	w = malloc(sizeof(char) * j + 1);
	if (!w)
		return (NULL);
	while (s[i] != c && s[i] && j > 0)
	{
		w[i] = s[i];
		i++;
		j--;
	}
	w[i] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**w;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	w = malloc (sizeof(char *) * (countword(s, c) + 1));
	if (!w)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			w[j] = ft_stock(s + i, c);
			i += countchar(s + i, c);
			j++;
		}
	}
	w[j] = 0;
	return (w);
}
