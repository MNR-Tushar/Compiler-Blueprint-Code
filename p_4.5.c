#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);
    int palindrome = 1;

    if (len % 2 != 0) {
        palindrome = 0;
    } else {
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                palindrome = 0;
                break;
            }
        }
    }

    if (palindrome)
        printf("Accepted (even-length palindrome)\n");
    else
        printf("Rejected\n");

    return 0;
}
