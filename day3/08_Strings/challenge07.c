#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Chaîne en majuscules : %s\n", str);

    return 0;
}
