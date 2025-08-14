#include <stdio.h>
#include <string.h>

int main() {
    char production[50], lhs;
    char alternatives[10][20];
    int n;

    printf("Enter number of alternatives: ");
    scanf("%d", &n);
    printf("Enter LHS: ");
    scanf(" %c", &lhs);

    for(int i=0; i<n; i++) {
        printf("Enter alternative %d: ", i+1);
        scanf("%s", alternatives[i]);
    }

    // Find common prefix
    char prefix[20];
    strcpy(prefix, alternatives[0]);
    for(int i=1; i<n; i++) {
        int j=0;
        while(prefix[j] && alternatives[i][j] && prefix[j]==alternatives[i][j])
            j++;
        prefix[j] = '\0';
    }

    printf("Common prefix: %s\n", prefix);

    // Factor out
    printf("%c -> %s", lhs, prefix);
    printf("(");
    for(int i=0; i<n; i++) {
        printf("%s", alternatives[i]+strlen(prefix));
        if(i != n-1) printf("|");
    }
    printf(")\n");

    return 0;
}
