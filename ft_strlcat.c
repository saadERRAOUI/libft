//Todo : #include "libft.h"
#include <string.h>
#include <stdio.h>

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize) {
    size_t i = 0;
    size_t size_dst = strlen(dst);//Todo : change to ft_strlen
    size_t size_src = strlen(src);//Todo : change to ft_strlen

    if(dstsize == 0 || size_dst <= size_src) {
        return (size_dst);
    }
    while (src[i] && i < size_dst + dstsize + 1) {
        dst[size_dst + i] = src[i];
        i++;
    }
    dst[size_dst + i] = '\0';
    return (size_dst + size_src);
}