//Todo : #include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c) {
    size_t i = strlen(s);//Todo : change to ft_strlen

    while(i > 0) {
        if (s[i] == c) {
            return ((char *)s + i);
        }
        i--;
    }
    return (NULL);
}