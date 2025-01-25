#include <stdio.h>
#include <string.h>
#include <ctype.h>

int substituteCharacters (char key[26], char text[30]);

int main (void) {
    char keyInput[26], key;
    char plainText[30];

    do {
        printf("Key: ");
        scanf("%s", keyInput);
    } while (strlen(keyInput) != 26);

    key = toupper(keyInput);

    printf("Plain text: ");
    scanf( " %99[^\n]", plainText);

    //printf("%s",plainText);

    substituteCharacters(key, plainText);

    return 0;
}

int substituteCharacters (char key[26], char text[30]) {
    char encodedText[30], toCompare[30];
    char base = 'A';

    printf("Encoded text: ");

    for (int i = 0; i < strlen(text); i++) {
        if (isspace(text[i])) {
            printf(" ");
        }
        
        if (isalpha(text[i])) {
            toCompare[i] = toupper(text[i]);

            //TO-DO: Regra que se a letra for A (todas da toCompare estão como upper) então ela corresponde a key[0], e assim suscetivamente.
            //toCompare[i];
        } else {
            encodedText[i] = text[i];
        }

        printf("%c", encodedText[i]);
    }

    return 0;
}