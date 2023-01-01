#include <unistd.h>
#include <stdio.h>

int    ft_str_is_uppercase(char *str);
int main()
{
    int back;
    back = ft_str_is_uppercase("AYZ");
    printf("%i", back);
    return (0);
}
int    ft_str_is_uppercase(char *str)
{
    int i;
    i = 0;
    
    int is_upper = 1;
    while (str[i] != 0)
    {
        if (str[i] < 65 || str[i] > 90) /*if (str[i] >= 48 && str[i] <= 57)*/
        {
            is_upper = 0;

            return (is_upper);
        }
        i++;
    }
    return (is_upper);
}
