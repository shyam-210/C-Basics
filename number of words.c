#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            count++;
        }
        i++;
    }

    return count + 1;
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int wordCount = countWords(sentence);
    printf("Total number of words: %d\n", wordCount);

    return 0;
}