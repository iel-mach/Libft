#include  "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *a;
    char *b;
    size_t i;

    a = (char *) dst;
    b = (char *) src;
    i = 0;
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return(a);
}

/*int main()
{
    char *src = "issam";
	char	dst[8];
	ft_memcpy(dst, src, 0);
	printf("%s\n",dst);
	char *src1 = "issam";
	char dst1[8];
	memcpy(dst1, src1, 0);
	printf("%s\n",dst1);
}*/