#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH

/*Function to generate a random password*/

void generatePassword(char *password, int length)
{
        int i;

        static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        for (i = 0; i < length; i++)
        {
                int index = rand() % (sizeof(charset) - 1);
                password[i] = charset[index];
        }
        password[length] = '\0';
}
int main()
{
        int passwordLength;
        char password[MAX_PASSWORD_LENGTH + 1];

        srand((unsigned int)time(NULL));
        passwordLength = 10;

        generatePassword(password, passwordLength);
        printf("%s\n", password);
        return (0);
}