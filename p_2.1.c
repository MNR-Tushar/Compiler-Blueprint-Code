#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter code: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    while (token != NULL) {
        if (strcmp(token, "int") == 0 || strcmp(token, "float") == 0 || strcmp(token, "char") == 0) {
            printf("Keyword: %s\n", token);
        } else if (isdigit(token[0])) {
            printf("Number: %s\n", token);
        } else if (strchr("=+-*/", token[0])) {
            printf("Operator: %s\n", token);
        } else {
            printf("Identifier: %s\n", token);
        }
        token = strtok(NULL, " \n");
    }
    return 0;
}
