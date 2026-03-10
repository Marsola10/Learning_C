// #include <stdio.h>

// int main() {
//     int n;
//     long long soma = 0;

//     printf("Digite a quantidade de números que deseja somar: ");
//     scanf("%d", &n);

//     printf("Agora digite os %d numeros: \n ", n);

//     for(int i = 0; i < n; i++) {
//         int x;
//         scanf("%d", &x);
//         soma += x;
//     }

//     printf("%lld\n", soma);

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    long long soma;

    printf("Endereço de n: %p\n", &n);
    printf("Endereço de soma: %p/n", &soma);

    printf("Digite quantos números deseja somar: ");
    scanf("%d", &n);

    for(int i; i < n; i++) {
        int x;
        printf("\nEndereço de i: %p\n", &i);
        printf("Endereço de x: %p\n", &x);

        scanf("%d", &x);

        soma += x;

    }

    printf("\nSoma final: %lld\n", soma);



    return 0;
}
