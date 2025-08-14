#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int count_a = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a') count_a++;
    }

    if (count_a % 2 == 0)
        printf("Accepted (even number of 'a')\n");
    else
        printf("Rejected\n");

    return 0;
}
