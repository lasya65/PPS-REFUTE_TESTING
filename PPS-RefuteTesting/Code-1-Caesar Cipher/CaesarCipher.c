#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to encrypt the text
void encrypt(char text[], int shift, char result[]) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        char char_result;
        if (isalpha(text[i])) {  // Check if the character is a letter
            char shift_base = isupper(text[i]) ? 'A' : 'a';
            char_result = (text[i] - shift_base + shift) % 26 + shift_base;
        } else {
            char_result = text[i];  // Non-alphabet characters are not encrypted
        }
        result[i] = char_result;
    }
    result[i] = '\0';  // Null-terminate the result string
}

int main() {
    char text[1000];
    int shift;
    char encrypted_text[1000];

    // Get user input
    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // Remove the newline character

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    // Encrypt the text
    encrypt(text, shift, encrypted_text);

    // Display the encrypted text
    printf("Encrypted text: %s\n", encrypted_text);

    return 0;
}
