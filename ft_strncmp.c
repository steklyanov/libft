
#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;
    while (str1[i++] && str2[i++], n-- > 0)
    {
        if (str1[i] != str2[i])
            return(str1[i] - str2[i]);
    }
    return (0);
}
