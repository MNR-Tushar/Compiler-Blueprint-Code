#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter identifier: ");
    scanf("%s", str);

    if (!(isalpha(str[0]) || str[0] == '_')) {
        printf("Invalid identifier\n");
        return 0;
    }

    for (int i = 1; i < strlen(str); i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            printf("Invalid identifier\n");
            return 0;
        }
    }

    printf("Valid identifier\n");
    return 0;
}
