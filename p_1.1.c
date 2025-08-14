#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    int count = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
    }
    printf("Total vowels: %d\n", count);
    return 0;
}
