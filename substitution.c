#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int substituteCharacters(char key[26], char text[30]);
bool isTextAlphabetical(char text);

int main(void) {
    char keyInput[26];
    char plainText[100];

    do {
        printf("Key: ");
        scanf("%26s", keyInput);
    } while (strlen(keyInput) != 26);

    for (int i = 0; i < 26; i++) {
        keyInput[i] = toupper(keyInput[i]);
    }

    printf("Plain text: ");
    scanf(" %99[^\n]", plainText);

    substituteCharacters(keyInput, plainText);

    return 0;
}

int substituteCharacters(char key[26], char text[30]) {
    char encodedText[30], toCompare[30];
    char base = 'A';

    printf("Encoded text: ");

    for (int i = 0; i < strlen(text); i++) {
        if (isTextAlphabetical(text[i])) {
            toCompare[i] = toupper(text[i]);

            //TO-DO: Regra que se a letra for A então ela corresponde a key[0], e assim suscetivamente.

            printf("%c", encodedText[i]);
        }
    }

    return 0;
}

bool isTextAlphabetical(char text) {
    if (isalpha(text)) {
        return true;   
    }
        
    if (isspace(text)) {
        printf(" ");
        return false;
    }
           
    printf("%s", text);
    return false;
}