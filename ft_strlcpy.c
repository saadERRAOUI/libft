#include "libft.h"

size_t      ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t      i;
    size_t      len_src;

    if (!src)
        return (0);
    i = 0;
    len_src = ft_strlen(src);
    if (dstsize <= 0)
        return (len_src);
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len_src);
}