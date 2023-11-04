#include "libft.h"

char *isNegative(long n, int digitCount)
{
    char    *s;
    int     i;

    if(!(s = malloc((digitCount + 2) * sizeof(char))))
        return (NULL);
    i = 0;
    s[0] = '-';
    n *= -1;
    while (i < digitCount)
    {
        s[digitCount - i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    s[digitCount + 1] = '\0';
    return (s);
}

char *isPositive(long n, int digitCount)
{
    char    *s;
    int     i;

    if (!(s = malloc((digitCount + 1) * sizeof(char))))
        return (NULL);
    i = 1;
    while (i <= digitCount)
    {
        s[digitCount - i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    s[digitCount] = '\0';
    return (s);
}

char    *ft_itoa(int n)
{
    char    *s;
    int     i;
    long     temp;
    int     digitCount;

    temp = (long)n;
    digitCount = 0;
    if (temp == 0)
        digitCount = 1;
    while (temp != 0) 
    {
        temp /= 10;
        digitCount++;
    }

    if(n >= 0) 
        return isPositive(n, digitCount);
    else if(n < 0)
        return isNegative(n, digitCount);
    return (NULL);
}