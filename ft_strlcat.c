#include "libft.h"

size_t      ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t      i;
    size_t      size_dst;
    size_t      size_src;

    i = 0;
    size_dst = ft_strlen(dst);
    size_src = ft_strlen(src);
    if (dstsize == 0) 
        return (size_src);
    if (dstsize < size_dst)
        return (size_src + dstsize);
    else if (dstsize == size_dst)
        return (size_dst + size_src);
    while (src[i] && (i + size_dst) < (dstsize  - 1)) 
    {
        dst[size_dst + i] = src[i];
        i++;
    }
    dst[size_dst + i] = '\0';
    return (size_dst + size_src);
}