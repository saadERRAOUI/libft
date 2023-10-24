//Todo : #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int ft_atoi(const char *str) {
    long number;
    int i;
    int isNegative;

    number = 0;
    i = 0;
    isNegative = 1;
    while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if(str[i] == '-') 
    {
        isNegative = -1;
        i++;
    } 
    else if(str[i] == '+') 
    {
        i++;
    }
    while(str[i] && isdigit(str[i]))
    {
        if (number < 0 && isNegative ==  -1)
			return (0);
		else if (number < 0 && isNegative == 1)
			return (-1);
		number = number * 10 + str[i++] - '0';
    }
    return (number * isNegative);
}