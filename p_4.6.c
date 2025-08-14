#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int valid = 1;
    if (str[0] != 'a') valid = 0;

    for (int i = 1; i < strlen(str); i++) {
        if (str[i] == str[i - 1]) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Accepted (alternating a and b)\n");
    else
        printf("Rejected\n");

    return 0;
}
