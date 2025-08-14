#include <stdio.h>
#include <string.h>

int main() {
    char type[20], var[20];
    printf("Enter declarations (type var;), end with 'end':\n");

    printf("Name | Type\n");
    printf("---------------\n");

    while (1) {
        scanf("%s", type);
        if (strcmp(type, "end") == 0) break;
        scanf("%s", var);
        var[strlen(var) - 1] = '\0'; // remove ';'
        printf("%s | %s\n", var, type);
    }
    return 0;
}
