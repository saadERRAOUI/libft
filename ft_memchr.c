#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    int i;
    unsigned char *str;

    str = (unsigned char *)s;
    while(str[i]) {
        if(str[i] == (unsigned char)c)
            return (str + i);
        i++;
    }
    return (NULL);
}