#include "libft.h"

char    *ft_strnstr(const char *str1, const char *str2, size_t len)
{
    int i;
    int j;
    size_t copy_len;

    copy_len = len;
    i = 0;
    j = 0;
    while (str1[i++] != '\0')
    {
        if (str1[i] == str2[j])
        {
            j++;
            if (str2[j] == '\0' || copy_len == 0)
                return((char*)&str1[i -j]);
        }
        else
            copy_len = len;
    }
    return (NULL);
}