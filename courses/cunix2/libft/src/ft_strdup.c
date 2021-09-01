#include "my_impl.h"
#include <stdlib.h>
#include <string.h>


char *ft_strdup(const char *str)
{
    size_t len = my_strlen((char *)str) + 1;
    char *buf = (char *) malloc(len);

    if (buf == NULL)
    {
        return NULL;
    }

    return (char *) memcpy(buf, str, len);
}
