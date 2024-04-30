#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
    size_t          len;
    const   char    *p;
    char            *dup;

    len = 0;
    p = s;
    while (len < n && *p != '\0')
    {
        len++;
        p++;
    }

    dup = (char *)malloc ((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);

    memcpy(dup, s, len);
    dup[len] = '\0';

    return (dup);
}

