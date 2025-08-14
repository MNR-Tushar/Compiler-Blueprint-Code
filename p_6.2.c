#include <stdio.h>
#include <string.h>

int main() {
    char production[50], lhs;
    char alpha[10][10], beta[10][10];
    int aCount = 0, bCount = 0;

    printf("Enter production (example: A->Aa|b): ");
    scanf("%s", production);

    lhs = production[0];
    char *rhs = &production[3];
    char *token = strtok(rhs, "|");

    while(token != NULL) {
        if(token[0] == lhs)
            strcpy(alpha[aCount++], token + 1);
        else
            strcpy(beta[bCount++], token);
        token = strtok(NULL, "|");
    }

    if(aCount == 0) {
        printf("No immediate left recursion detected.\n");
        return 0;
    }

    printf("After eliminating left recursion:\n");
    for(int i=0; i<bCount; i++)
        printf("%c -> %s%c'\n", lhs, beta[i], lhs);
    for(int i=0; i<aCount; i++)
        printf("%c' -> %s%c' | ε\n", lhs, alpha[i], lhs);

    return 0;
}
