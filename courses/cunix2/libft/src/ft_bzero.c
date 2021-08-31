#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    char *dst = s;
    size_t i;
    
    for (i = 0; i < n; ++i)
    {
        dst[i] = '\0';
    }
}
