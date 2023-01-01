#include <unistd.h>
#include <stdio.h>

int    ft_str_is_numeric(char *str);
int main()
{
    int back;
    back = ft_str_is_numeric("132");
    printf("%i", back);
    return (0);
}
int    ft_str_is_numeric(char *str)
{
    int i;
    i = 0;
    
    int is_numeric = 1;
    while (str[i] != 0)
    {
        if (str[i] < 48 || str[i] > 57) /*if (str[i] >= 48 && str[i] <= 57)*/
        {
            is_numeric = 0;

            return (is_numeric);
        }
        i++;
    }
    return (is_numeric);
}
