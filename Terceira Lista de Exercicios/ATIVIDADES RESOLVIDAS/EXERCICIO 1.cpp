#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include<stdio.h>   
#include<stdlib.h>  
#include<iostream>
#include<locale.h>  

int main() {
 setlocale(LC_ALL, "");
 int i, valor = 0;
 char palavra[15], inversa[15];
 printf("----------------------------\n\n"); 
 printf(" Ola ! Este é o Exercicio 1 \n\n"); 
 printf("----------------------------\n\n"); 
 system("pause");
 system("cls");
 printf("-------------------------\n\n");
 printf(" Digite uma palavra \n\n");
 printf("-------------------------\n\n");
 gets(palavra);
 system("cls");

 
 for(i = 0; palavra[i]; i++){
   palavra[i] = tolower(palavra[i]);
 }

 
 strcpy(inversa, palavra);

 
 strrev(inversa);

 valor = strcmp(palavra, inversa);

 if (valor == 0)
   {
   printf("--------------------------------\n\n");
   printf(" A palavra %s é palíndroma\n", palavra);
   }
 else
   {
   printf("--------------------------------\n\n");
   printf(" A palavra %s não é palíndroma \n\n", palavra);
   }

 return 0;
}
