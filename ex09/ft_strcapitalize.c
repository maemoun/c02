#include <unistd.h>
//#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    if ((str[i] >= 'a' && str[i] <= 'z'))
    {
        str[i] = str[i] - 32;
        i++;
    }
    while(str[i])
    {
        if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }
    return(str);
}

/*int main()
{
    char str[] = "";
    printf("%s\n", ft_strcapitalize(str));
    return(0);
}*/