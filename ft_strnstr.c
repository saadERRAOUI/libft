#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int     i;
    size_t  size_needle;

    i = 0;
    size_needle = ft_strlen(needle);
    if (size_needle == 0)
        return ((char *)haystack);
    while (haystack[i] && i < len) 
    {
        if ((haystack[i] == needle[0]) && ft_strncmp(haystack + i, needle, size_needle) == 0) {
            return (char *)haystack + i;
        }
        i++;
    }
    return (NULL);
}