#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    
    char *ptr;
    int i;
    int size_S1;
    int size_S2;
 
    if(!s1 || !s2)
        return (NULL);
    size_S1 = ft_strlen(s1);
    size_S2 = ft_strlen(s2);
    if(!(ptr = malloc((size_S1 + size_S2 + 1) * sizeof(char)))) 
        return (NULL);
    i = 0;
    while(i < size_S1){
        ptr[i] = s1[i];
        i++;
    }
    while(i < (size_S1 + size_S2))
    {
        ptr[i] = s2[i - size_S1];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}