#include <unistd.h>
//#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

/*int main()
{
    unsigned int n = 3;
    char dest[] = "edfggh";
    char src[] = "abc";
    printf("%s\n", ft_strncpy(dest, src, 3));
    return(0);
}*/