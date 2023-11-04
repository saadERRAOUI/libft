#include "libft.h"

char    *ft_strrchr(const char *s, int c) {
    char    *ptr;
    
    ptr = 0;
    while (*s) 
    {
        if (*s == c) 
            ptr = (char *)s;
        ++s;
    }
    if (ptr)
        return (ptr);
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}