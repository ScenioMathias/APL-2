

#include<stdio.h>   //biblioteca para uso de entrada e saída padrão printf para escrita na tela
#include<stdlib.h>  //biblioteca para funcionalidades como "system"
#include<iostream>
#include<locale.h>  //biblioteca para acessar acentuações e vírgulas estilo Brasil

//prototipo da funcao 
int fatorial(int);

main() {
int n; //variáveis do programa
	
setlocale(LC_ALL, "ptb");
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 1 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");  
printf("------------------------------------\n\n");
printf(" Digite um valor para o fatorial: \n\n");
printf("------------------------------------\n\n");
scanf("%d",&n);
system("cls"); 
printf("--------------------------------------\n\n");
printf(" O fatorial de %d vale: %d\n",n,fatorial(n));
printf("--------------------------------------\n\n");
system("pause");
}


int fatorial(int n)
{

if (n == 0)
{ //Caso trivial
return 1; //Solução direta
}
else
{
return n*fatorial(n-1); //Chamada recursiva
}
}
