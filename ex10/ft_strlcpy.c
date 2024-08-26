#include <unistd.h>
//#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    i = 0;
    int length = ft_strlen(src);
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(length);
}

/*int main()
{
    char dest[] = "abcde";
    char src[] = "1234dfsfgh";
    unsigned int size = 7;
    printf("%d\n", ft_strlcpy(dest, src, size));
    printf("%s\n", dest);
    return(0);
}*/