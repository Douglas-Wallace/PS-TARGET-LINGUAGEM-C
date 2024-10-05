#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int pertence_fibonacci(int num) {
    int a = 0, b = 1, prox;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (b < num) {
        prox = a + b;
        a = b;
        b = prox;
    }

    if (b == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um numero nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite uma quantidade valida!\n");
        return 1;
    }

    if (pertence_fibonacci(n)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", n);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", n);
    }

    return 0;
}
