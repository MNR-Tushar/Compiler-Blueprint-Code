#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int binary = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            binary = 0;
            break;
        }
    }

    if (binary)
        printf("Binary string\n");
    else
        printf("Not a binary string\n");

    return 0;
}
