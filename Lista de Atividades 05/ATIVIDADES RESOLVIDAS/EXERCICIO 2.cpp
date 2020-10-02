
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int funcao(int n, int pot, int bin) {
  bin += (n % 2)* pot;
  n = n/2;
  pot = pot *10;
  if (n <= 0) {
    return bin;
  }
  bin = funcao(n, pot, bin);
}

int main() {
  setlocale(LC_ALL, "ptb");	
  int n,pot,bin;
  printf("----------------------------\n\n"); 
  printf(" Ola ! Este é o Exercicio 1 \n\n"); 
  printf("----------------------------\n\n"); 
  system("pause");
  system("cls");  
  printf("------------------------------------------------------------\n\n");
  cout << endl << "Digite um Numero a ser calculado o seu fatorial : \n\n";
  printf("------------------------------------------------------------\n\n");
  cin >> n;
  system("cls");  
  pot = 1;
  bin = 0;
  bin = funcao(n, pot, bin);
  printf("----------------------------\n\n");
  printf("O Fatorial de %d é : %d \n\n",n,bin);
  printf("----------------------------\n\n");
  system("pause");
  system("cls"); 
  system("pause");
  system("cls"); 
  cin.get();
  return 0;
}
