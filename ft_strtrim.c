//Todo : #include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set) {
    char *str;
    int i;
    int size_set;
    int size_s1;

    if(!s1 || !set)
        return (NULL);
    size_s1 = strlen(s1);
    size_set = strlen(set);
    i = 0;
    if(strncmp(s1, set, size_set) == 0 && strncmp((char *)s1 + (size_s1 - size_set), set, size_set) == 0)
    {
        if(!(str = malloc((size_s1 - (2 * size_set) + 1) * sizeof(char))))
            return (NULL);
        while(s1[i + size_set] && i < (size_s1 - (2 * size_set)))
        {
            str[i] = s1[i + size_set];
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}