#include <stdio.h>

int main() {
    char word[5];
    printf("Enter a 4-letter word: ");
    if (scanf("%4s", word) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    word[0] ^= 32;
    word[1] ^= 32;
    word[2] ^= 32;
    word[3] ^= 32;

    printf("Toggled word: %s\n", word);

    return 0;
}
