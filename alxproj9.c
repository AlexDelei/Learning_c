#include <stdio.h>

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

int main() {
    char str[] = "Hello, world!";
    char c = 'o';

    char *result = _strchr(str, c);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", c, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", c);
    }

    return 0;
}
