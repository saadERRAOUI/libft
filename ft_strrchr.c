#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    char *ptr;
    int i;
    int len;
    
    if(!s) return (0);
    if(c == '\0') return ((char *)s);
    i = ft_strlen(s) - 1;
    //ptr = 0;
    while(s[i]) 
    {
        if (s[i] == c) 
            return ((char *)s + i);
        i--;
    }
    //if(c == '\0') return ((char *)s);
    return (0);
}