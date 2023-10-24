//Todo : #include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    unsigned int i;

    while(s[i]) {
        f(i, &s[i]);
        i++;
    }
}