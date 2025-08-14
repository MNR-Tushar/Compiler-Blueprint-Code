#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    int in_word = 0, words = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace((unsigned char)s[i])) {
            if (!in_word) { in_word = 1; words++; }
        } else {
            in_word = 0;
        }
    }
    printf("Total words: %d\n", words);
    return 0;
}
