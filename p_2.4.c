#include <stdio.h>
#include <string.h>

int main() {
    char type1[10] = "int";
    char type2[10] = "float";

    printf("Checking: a(int) = b(float) + 2.3(float)\n");
    if (strcmp(type1, type2) != 0) {
        printf("Type Mismatch Error: int = float\n");
    } else {
        printf("Assignment is valid.\n");
    }
    return 0;
}
