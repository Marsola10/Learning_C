#include <stdio.h>

int main() {
    printf("Contagem crescente em for:\n");
    for(int i = 1; i <= 10; i++){
        printf("\t%d\n", i);
    }

    printf("Contagem decrescente em for:\n");
    for (int j = 10; j >= 0; j--) {
        printf("\t%d\n", j);
    }

    return 0;
}