//Todo : #include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s1) {
    char *dup;
    int i;

    i = 0;
    if(!(dup = (char *) malloc((strlen(s1) + 1 )* sizeof(char))))//Todo: change strlen to ft_strlen
        return (0);
    while(s1[i]) {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';

    return (dup);
}