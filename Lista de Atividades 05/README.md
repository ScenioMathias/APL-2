# Lista de Atividades 05 
<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## _Anunciado das atividades_

* Arquivo pdf com enunciado das 4 atividades.

## _Atividades Resolvidas_

* 4 Arquivos em .cpp contendo os exercícios.

## _Exercicio 1_

_Implementar o cálculo do fatorial de um número inteiro informado pelo
usuário. O cálculo do fatorial deverá ser realizado por meio de uma função
recursiva. Apresentar o valor do fatorial ao final do programa._

```shell
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

```

## _Exercicio 2_

_Um problema típico em ciência da computação consiste em converter um
número da sua forma decimal para a forma binária. Por exemplo, o número 12
tem a sua representação binária igual a 1100. A forma mais simples de fazer
isso é dividir o número sucessivamente por 2, onde o resto da i-ésima divisão
vai ser o dígito i do número binário (da direita para a esquerda)._

_Por exemplo: 12/2=6, resto 0 (1º dígito da direita para esquerda); 6/2=3,
resto 0 (2º dígito da direita para esquerda); 3/2=1, resto 1 (3º dígito da direita
para esquerda); 1/2=0, resto 1 (4º dígito da direita para esquerda). Resultado:
12=1100._

_Implemente um programa que calcule por meio de uma função recursiva
a representação binária de um valor inteiro digitado pelo usuário._

```shell
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

```

## _Exercicio 3_

_Seja a série de Fibonacci:_

_1, 1, 2, 3, 5, 8, 13, 21, 34, 55,..._

_que pode ser definida recursivamente por:_

<img src="https://github.com/ScenioMathias/APL-2/blob/main/Lista%20de%20Atividades%2005/Fibonacci.png?raw=true" alt="smashupy" width="280"/>

_Implemente uma função recursiva para o cálculo da série de Fibonacci
até o n-ésimo termo, onde o usuário deve entrar com o termo n. Assim, caso
𝑛 = 8 a série deverá apresentar todos seus valores até o oitavo elemento._

```shell
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
 

```

## _Exercicio 4_

_A potenciação de um valor 𝑥 à uma potência 𝑦 é o resultado de uma
multiplicação sucessiva 𝑦-vezes de 𝑥. Por exemplo: 3 elevado a 4 = 3 × 3 × 3 × 3 = 81.
Implemente um programa que calcule a potenciação 𝑥
𝑦 onde 𝑥 e 𝑦 são números
inteiros, positivos, que devem ser digitados pelo usuário. A potenciação deve
ser calculada por meio de uma função recursiva._

```shell
#include <stdio.h>

int main() {
  int x,        /* base                         */ 
      n,        /* expoente                     */
      potencia, /* guarda as potencias parciais */ 
      contador; 
  
  printf("\n\tCalculo de potencias\n");
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &x);
  printf("Digite um numero um inteiro nao-negativo: ");
  scanf("%d", &n);
  
  /* Inicializacoes */
  potencia = 1;
  contador = 0;
  
  /* Calculo da potencia */
  while (contador != n) {
    potencia = potencia * x;
    contador = contador + 1;
  }
  
  printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
  return 0;
}

```
