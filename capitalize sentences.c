#include <stdio.h>
#include <ctype.h>

void capitalizeSentences(char *str) {
    int capitalize = 1;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalize = 1;
        } 
		else if (isalpha(str[i]) && capitalize) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        }
        i++;
    }
}

int main() {
    char text[100];

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    capitalizeSentences(text);
    printf("Capitalized text:\n%s", text);

    return 0;
}