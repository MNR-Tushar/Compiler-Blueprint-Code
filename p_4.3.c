#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] == 'a') i++;
    while (str[i] == 'b') i++;
    while (str[i] == 'c') i++;

    if (str[i] == '\0')
        printf("Accepted (matches a*b*c*)\n");
    else
        printf("Rejected\n");

    return 0;
}
