#include <stdio.h>
#include <string.h>

int main() {
    char production[50];
    char lhs, rhs[50];

    printf("Enter a production (example: A->Aa|b): ");
    scanf("%s", production);

    lhs = production[0];  // Left-hand side non-terminal
    strcpy(rhs, &production[3]); // Right-hand side

    char *token = strtok(rhs, "|");
    int leftRecursion = 0;

    while(token != NULL) {
        if(token[0] == lhs) {
            leftRecursion = 1;
            break;
        }
        token = strtok(NULL, "|");
    }

    if(leftRecursion)
        printf("The production has immediate left recursion.\n");
    else
        printf("No immediate left recursion detected.\n");

    return 0;
}
