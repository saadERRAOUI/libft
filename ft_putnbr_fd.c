//Todo : #include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd) {
    if(n) {
       ft_putstr_fd(ft_itoa(n), fd);
    }
}