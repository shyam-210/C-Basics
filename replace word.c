#include <stdio.h>
#include <string.h>

void replaceWord(char *str, const char *wordToReplace, const char *newWord) {
    char *pos;
    int wordLen = strlen(wordToReplace);
    int newWordLen = strlen(newWord);
    
    while ((pos = strstr(str, wordToReplace)) != NULL) {
        memmove(pos + newWordLen, pos + wordLen, strlen(pos + wordLen) + 1);
        memcpy(pos, newWord, newWordLen);
    }
}

int main() {
    char str[100] = "I love apples. Apples are delicious.";
    const char wordToReplace[] = "apples";
    const char newWord[] = "bananas";
    
    printf("Original string: %s\n", str);
    
    replaceWord(str, wordToReplace, newWord);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}