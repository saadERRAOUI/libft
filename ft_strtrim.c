#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    char *str;
    int i;
    int size_set;
    int size_s1;

    if(!s1 || !set)
        return (NULL);
    size_s1 = ft_strlen(s1);
    size_set = ft_strlen(set);
    i = 0;
    if(ft_strncmp(s1, set, size_set) == 0 && ft_strncmp((char *)s1 + (size_s1 - size_set), set, size_set) == 0)
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