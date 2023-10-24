#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize) {
    size_t i = 0;
    while (src[i] && i < dstsize - 1) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}