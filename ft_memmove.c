#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    if(!len) {
        return (dst);
    }
    else if(d <= s) {
        return (ft_memcpy(dst, src, len));
    } else {
        d += len;
        s += len;
        while (len--) {
            *--d = *--s;
        }
    }

    return (dst);
}