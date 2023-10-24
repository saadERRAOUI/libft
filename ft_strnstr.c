#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    int i = 0;
    size_t size_needle = strlen(needle);
    while(haystack[i] && i < len) {
        if((haystack[i] == needle[0]) && strncmp(haystack + i, needle, size_needle) == 0) {
            return (char *)haystack + i;
        }
        i++;
    }
    return (NULL);
}