#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    unsigned int i;
    char *str;

    i = 0;
    if(!(str = malloc(sizeof(char) * (strlen(s) + 1)))) //Todo : change to ft_strlen
        return (NULL);
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}