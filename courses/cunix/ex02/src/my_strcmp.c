int my_strcmp(char *str1, char *str2);

int my_strcmp(char *str1, char *str2)
{
    unsigned int i;

    for (i = 0; str1[i] != '\0'; ++i)
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
    }
    return 0;
}
