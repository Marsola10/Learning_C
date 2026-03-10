#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");

  int opcao;
  printf("Escolha uma opção:");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Cadastrar\n"); 
      break;
    case 2:
      printf("Listar\n");
      break;
    default:
      printf("Opção inválida!\n");
    }

  return 0;
}