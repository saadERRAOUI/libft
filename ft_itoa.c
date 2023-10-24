#include "libft.h"

char *ft_itoa(int n){
    char *s;
    int i;
    int sign;
    int temp;
    int digitCount;

    temp = n;
    while(temp != 0) {
        temp /= 10;
        digitCount++;
    }

    if(n >= 0) {
        sign = 1;
        temp = 1;
    }
        
    else {
        sign = -1;
        temp = 2;
    }
        
    if(!(s = malloc((digitCount + temp) * sizeof(char))))
        return (NULL);
    i = 1;
    if(sign == -1) {
        s[0] = '-';
        i = 0;
    }
    n *= sign;
    while (i <= digitCount && n != 0) {
        s[digitCount - i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    if(sign == -1){
        printf("%i\n", digitCount + 1);
        s[digitCount + 1] = '\0';
    }
    else {
        s[digitCount] = '\0';
        printf("%i\n", digitCount);
    }

    return (s);
}