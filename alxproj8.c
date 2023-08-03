#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char buffer[10];
    char *ptr;

    ptr = _memset(buffer, 'A', 10);

    // Printing the memory area to verify the result
    for (int i = 0; i < 10; i++) {
        printf("%c ", ptr[i]);
    }
    printf("\n");

    return 0;
}
