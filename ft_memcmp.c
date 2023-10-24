//Todo : #include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    int i = 0;
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;

    while(i < n) {
        if(str1[i] != str2[i]) 
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}