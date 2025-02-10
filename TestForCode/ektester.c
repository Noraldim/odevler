#include <stdio.h>

char* my_strchr(char* str, char ch) {
    while(*str != '\0') {
        if(*str == ch)
            return str;
        str++;
    }
    return NULL;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    char *res = my_strchr(str, ch);
    if(res != NULL)
        printf("The character '%c' is found in \"%s\" at position: %ld\n", ch, str, res - str);
    else
        printf("The character '%c' is not found in \"%s\"\n", ch, str);
    return 0;
}
