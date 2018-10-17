/* This program takes a string from the user and classifies it into one of the different categories: vowels,
 * consonants, digits, special characters and spaces.
 *
 * Author: Gerardo González Becerril.
 * Date: October 16th, 2018.
 * E-mail: a01411981@itesm.mx
 */

#include <stdio.h>

int main() {

    char string[100]; // Variable that stores the string.
    int i = 0; // Counts the amount of characters in the array.

    printf("Give me a string:\n"); // Asks the user for input.
    fgets(string, sizeof(string), stdin); // Stores the input in the string array.

    // While loop that goes through all the characters in the array.
    while (string[i] != '\n') {
        // If statement that checks whether the character's ASCII number is in any of the ranges.
        if ((string[i] > 64 && string[i] < 91) || (string[i] > 96 && string[i] < 123)) {
            // If statement that checks whether the character's ASCII number is in any of the ranges (vowels).
            if (string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 ||
            string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117) {
                printf("Character %c is a vowel.\n", string[i]);
            } else {
                printf("Character %c is a consonant.\n", string[i]);
            }
        } else if ((string[i] > 47 && string[i] < 58)) {
            printf("Character %c is a digit.\n", string[i]);
        } else if (string[i] == 32) {
            printf("Character %c is a whitespace.\n", string[i]);
        } else {
            printf("Character %c is a special character.\n", string[i]);
        }
        i++; // Keeps the loop moving.
    }

    return 0;

}