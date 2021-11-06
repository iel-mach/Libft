
#include <string.h>
#include "libft.h"
int main()
{
     char dst[] = "acoucou";
    char dst1[] = "ücoucou";
   char src1[] = "ücoucou";
    char src[] = "acoucou";
   // printf("%zu\n", ft_strlcat(dst, src,4));
    ///printf("%zu\n", strlcpy(dst, src,3));
    /*char src[] = "coucou";
    char dest[10]; ft_memset(dest, 'A', 10);
    printf("%zu\n", ft_strlcpy(dest, src, 0));
    printf("%s\n", dest);*/
    //char src1[] = "coucou";
    //char dest1[10] ; ft_memset(dest1, 'A', 10);
   // printf("%zu\n",ft_strlcpy(dest1, src1, -1) );
    //printf("%s\n", dest1);
   /*char src[] = "coucou";
    char dest[10] ; ft_memset(dest, 'A', 10);
    printf("%zu\n",ft_strlcpy(dest, src, 0) );
    printf("%s\n", dest);*/
    
    printf("%d\n",strncmp(dst, dst1 , 6));
   printf("%d\n",ft_strncmp(src, src1 , 6));
   /*int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   //strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
}