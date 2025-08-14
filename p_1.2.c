#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper((unsigned char)s[i]);
    }
    printf("%s", s);
    return 0;
}
