#include <stdio.h>

int main(void) {
    char s[1000];
    int n = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;

    while (s[n] != '\0') n++;          // find length
    if (n && s[n-1] == '\n') s[--n] = '\0'; // strip newline and fix length

    for (int i = 0, j = n-1; i < j; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    printf("%s\n", s);
    return 0;
}
