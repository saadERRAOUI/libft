//Todo : #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char const *s, char c) {
    int i;
    int chuncks_number;

    i = 0;
    chuncks_number = 0;
    while (s[i]) {
        if(s[i] == c && s[i - 1] != c)
            chuncks_number += 1;
        i++;
    }
    if(s[i - 1] != c)
        chuncks_number += 1;
    printf("%i\n", chuncks_number);
    return (chuncks_number);
}

int count_word_len(char const *s, char c) {
    int i;
    int len;

    while(s[i] == c) 
        i++;
    while(s[i] != c) {
        len++;
        i++;
    }
    return len;
}

void *free_allocation(char **s, int count) {
    while(count >= 0) {
        free(s[count]);
        count--;
    }
    free(s);
    s = NULL;
    return (NULL);
} 

char **ft_split(char const *s, char c) {
    char **str;
    int offset;
    int j;
    int i;
    int chuncks_number;

    if(!s || !c)
        return (NULL);
    chuncks_number = count_words(s, c);
    if(!(str = malloc((chuncks_number + 1) * sizeof(char *))))
        return (NULL);
    offset = 0;
    while(i < chuncks_number) {
        if(!(str[i] = malloc((count_word_len(&s[offset], c) + 1) * sizeof(char))))
            return (free_allocation(str, offset - 1)); //Todo : create a function to free the allocated memory before returning;
        j = 0;
        while(s[offset] == c)
            offset++;
        while(s[offset] && s[offset] != c)
            str[i][j++] = s[offset++];
        str[i][j] = '\0';
        i++;
    }
    str[i] = NULL;
    
    return (str);
}

int main() {
    char a[] = "saad erraoui TEST  ";
    char **b = ft_split(a, ' ');
    printf("%lu\n", strlen(b[0]));
    printf("%s\n", (b[0]));
}