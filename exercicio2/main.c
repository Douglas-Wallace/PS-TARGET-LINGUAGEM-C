#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }


    if (count > 0) {
        printf("A letra 'a' ou 'A' ocorre %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' ou 'A' nao foi encontrada na string.\n");
    }

    return 0;
}
