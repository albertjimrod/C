#include <unistd.h>
#include <stdio.h>

int    ft_str_is_lowercase(char *str);
int main()
{
    int back;
    back = ft_str_is_lowercase("aaaatytreetffgdszxvvczx_vz");
    printf("%i", back);
    return (0);
}
int    ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;
    
    int is_lower = 1;
    while (str[i] != 0)
    {
        if (str[i] < 97 || str[i] > 122) /*if (str[i] >= 48 && str[i] <= 57)*/
        {
            is_lower = 0;

            return (is_lower);
        }
        i++;
    }
    return (is_lower);
}
