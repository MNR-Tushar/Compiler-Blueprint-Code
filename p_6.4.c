#include <stdio.h>
#include <string.h>

int main() {
    char lhs, alt1[20], alt2[20];
    printf("Enter LHS: ");
    scanf(" %c", &lhs);
    printf("Enter first alternative: ");
    scanf("%s", alt1);
    printf("Enter second alternative: ");
    scanf("%s", alt2);

    // Find common prefix
    char prefix[20];
    int i=0;
    while(alt1[i] && alt2[i] && alt1[i]==alt2[i]) {
        prefix[i] = alt1[i];
        i++;
    }
    prefix[i] = '\0';

    printf("After left factoring:\n");
    printf("%c -> %s(%s|%s)\n", lhs, prefix, alt1+i, alt2+i);

    return 0;
}
