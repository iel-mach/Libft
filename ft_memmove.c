#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dst;
	b = (char *)src;
	i = 0;
	if (a > b)
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
		return (a);
	}
	return (ft_memcpy(a, b, len));
}
