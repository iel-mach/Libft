#include  "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *a;
    char *b;
    size_t i;

    a = (char *) dst;
    b = (char *) src;
    i = 0;
    if ( a == NULL && b == NULL)
        return(NULL);
    if (a == b)
        return(a);
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return(a);
}