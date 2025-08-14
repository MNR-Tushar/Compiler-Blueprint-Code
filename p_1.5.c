#include <stdio.h>

int main(void) {
    char s[1000];
    int n = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;

    while (s[n] != '\0') n++;
    if (n && s[n-1] == '\n') s[--n] = '\0';

    int i = 0, j = n - 1;
    int ok = 1;
    while (i < j) {
        if (s[i] != s[j]) { ok = 0; break; }
        i++; j--;
    }
    printf("%s\n", ok ? "Palindrome" : "Not Palindrome");
    return 0;
}
