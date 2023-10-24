#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {

    char *str;
    int i;

    if(!s)
        return (NULL);
	if(s[0] == '\0' || start > strlen(s)) //Todo : change to ft_strlen
    {
		if(!(str = malloc(1 * sizeof(char))))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
    if(!(str = malloc((len + 1) * sizeof(char))))
        return (NULL);
    i = 0;
    while(s[(start - 1) + i] && i < len) {
        str[i] = s[(start - 1) + i];
        i++;
    }
    str[i] = '\0';
    return  (str);
}
int main() {
    char a[] = "saad erraoui taouil adil";
    printf("%s\n", ft_substr(a, 6, 7));
}
