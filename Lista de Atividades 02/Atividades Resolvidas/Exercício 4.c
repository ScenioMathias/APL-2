/* Calculo para determinar se o n�mero inserido � primo. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"Portuguese");
  int i, x; 
  int div = 0;
  
  do {
    system("cls");
    printf("Para determinarmos se o n�mero � primo, digite um n�mero inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O n�mero %d � primo!", x);
  else
    printf("O n�mero %d n�o � primo!", x);

  return 0;
}
