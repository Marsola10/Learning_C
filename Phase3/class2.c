#include <stdio.h>

int main() {

  // int age = 26; // '26' is the current value of 'age' variable;

  // printf("My age is: %d\n", age); // %d is a placeholder indicating where the value assigned to the variable  'age' (26) is to be filled in during printing;

  float proffit = 2150.48;

  printf("My proffit is R$:%.2f\n", proffit); // %d worlks only for int variables; to print a float variable, we'd use %f instead. By default, %f displays a number with six digits after the decimal point;

  return 0;
}