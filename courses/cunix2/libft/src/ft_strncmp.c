#include <stdio.h>
#include <strings.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    if (n == 0)
    {
        return 0;
    }
    
    while (n) {
        if (*str1 != *str2)
        {
            return (*(unsigned char *)str1 - *(unsigned char *)str2);
        }
        else if (*str1 == 0)
        {
            break;
        }
        str1++;
        str2++;
        n--;
    }
    return 0;
}
