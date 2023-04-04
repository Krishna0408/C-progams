#include <stdio.h>

char firstNonRepeated(char* str) {
    int count[128] = {0};
    int i;
    char c;
    for (i = 0; str[i]; i++) {
        count[str[i]]++;
    }
    for (i = 0; str[i]; i++) {
        if (count[str[i]] == 1) {
            c = str[i];
            return c;
        }
    }
    return ' ';
}

int main() {
    char test[10];
    scanf("%s",&test);
    printf("%c", firstNonRepeated(test));
    return 0;
}
