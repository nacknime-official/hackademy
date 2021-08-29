char *my_strcpy(char *dest, const char *src);

char *my_strcpy(char *dest, const char *src)
{
    char *res = dest;
    
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return res;
}
