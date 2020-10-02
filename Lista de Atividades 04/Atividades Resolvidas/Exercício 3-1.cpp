
// biblioteca 
#include <stdio.h>
#include<locale.h>
#include<stdlib.h>  
// prototipos da funcao 
int contadigitos(int n, int d);

// funcao main 
int main() {
setlocale(LC_ALL, "ptb"); 	
int a, b, d;                                                    // variaveis principais 
int permuta;                                                   // 
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 3-1 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("--------------------------------\n\n");               //  apresentacao da selecao de exercicio selecionado pelo usuario 
printf(" Digite dois valores inteiros: \n\n");               //
printf("--------------------------------\n\n");             //
scanf("%d %d",&a,&b);
system("pause");                                        // comando para dar pause no codigo 
system("cls");                                         // comando para limpar tela
permuta = 1;

for (d = 1; d <= 9; d++)                            //Laço de repeticao for  
if (contadigitos(a,d) != contadigitos(b,d))    // sentenca de condicao if 
	permuta = 0;

if (permuta == 1)
{
	("---------------------------------------------\n\n");               // Apresentacao quando os valores sao permutados 
	printf(" O valor %d não é permutação do valor %d\n\n",a,b);         //
	("---------------------------------------------\n\n");             //
}
else
{
	("---------------------------------------------\n\n");           // Apresentacao quanto os valores nao sao permutados 
	printf(" O valor %d não é permutação do valor %d\n",a,b);       //
	("---------------------------------------------\n\n");         //
}

return 0;
}

// funcao 
int contadigitos(int n, int d)        // funcao contadigitos onde sera realizado a contagem dos digitos das variaveis
{
int conta, resto;                   // variaveis internas 
conta = 0;                         // atribuindo valor 0 a variavel conta 

while (n != 0) {                 // laço de repeticao while
resto = n % 10;             //
n = n/10;                  //
if (resto == d)           //
	conta++;             //
}                        

return conta;             // returnando valor de conta 
}
