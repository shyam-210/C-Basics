#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str;
    
    while (*ptr) {
        ptr++;
    }
    
    return ptr - str;
}

int main() {
    char str[] = "Hello, world!";
    int length = stringLength(str);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}
