/*O programa deve calcular o fatorial de um n�mero inteiro digitado pelo
usu�rio. O fatorial deve ser calculado por uma fun��o. O programa deve
apresentar o resultado final ao usu�rio. */
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include<stdio.h>   
#include<stdlib.h>  
#include<iostream>
#include<locale.h> 
#include<time.h>
#include<stdio.h>

int fatorial(int n);


main(){
int  n;	
setlocale(LC_ALL, "ptb");
printf("----------------------------\n\n"); 
printf(" Ola ! Este � o Exercicio 2 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("--------------------------------------------------------------\n\n"); 
printf(" Insira um valor para que calculemos seu fatorial  \n\n");
printf("--------------------------------------------------------------\n\n");
scanf("%d",&n); 
system("cls"); 
fatorial(n);
}

int fatorial(int n)
{
int aux;	
int fat;
aux = n;
for(fat = 1; n > 1; n = n - 1)
{
  fat = fat * n;
}


printf("--------------------------------\n\n"); 
printf(" O fatorial de %d � : %d \n\n", aux,fat);
return 0;
}
