#include "my_impl.h"
#include <stddef.h>
#include <stdio.h>

char *ft_strchr(const char *string, int symbol)
{
    size_t len = my_strlen((char *)string) + 1;
    size_t i;

    for (i = 0; i < len; ++i)
    {
        if (string[i] == symbol)
        {
            return (char*)&string[i];
        }
    }
    
    return NULL;
}
