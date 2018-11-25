

#include "libft.h"

int     ft_strcmp(const char *str1, const char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i++] && str2[j++])
    {
        if (str1[i] != str2[j])
            return(str1[i] - str2[j]);
    }
    return (0);
}