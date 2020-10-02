#include <stdio.h>
int fibonaccirec(int n) {
 printf("\nchamando fibonacci recursiva de %10d", n);
 if (n == 0) return 0;
 if (n == 1) return 1;
 return fibonaccirec(n - 1) + fibonaccirec(n - 2);
}

/* dado n > 0 calcular o n-ésimo número de Fibonacci */
int main() {
int n; /* numero dado */
/* ler o n */
printf("digite o valor de n:");
scanf("%d", &n);
/* calcule e imprima o n-ésimo número de Fibonacci */
printf("\n\nfibonacci de %10d recursivo = %10d",
 n, fibonaccirec(n));
 return(0);
 }
 
