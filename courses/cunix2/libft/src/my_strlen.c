unsigned int my_strlen(char *str)
{
  unsigned int i;
  
  for (i = 0; str[i] != '\0'; ++i);
  return i;
}
