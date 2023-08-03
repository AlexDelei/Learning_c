#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void set_string(char **s, char *to) {
    // Free the memory occupied by the old string if it exists
    if (*s != NULL) {
        free(*s);
    }

    // Allocate memory for the new string
    *s = (char *)malloc((strlen(to) + 1) * sizeof(char));
    
    // Copy the contents of 'to' to the newly allocated memory
    strcpy(*s, to);
}

int main() {
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
