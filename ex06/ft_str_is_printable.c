#include <unistd.h>
//#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (!(str[i] >= '!' && str[i] <= '~'))
            return(0);
        i++;
    }
    return(1);
}

/*int main()
{
    char str[] = " ";
    printf("%d\n", ft_str_is_printable(str));
    return(0);
}*/