# Lista de Atividades 04

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## _Anunciado das atividades_ 

* Arquivo .pdf com enunciado das 4 atividades.

## _Atividades Resolvidas_

* 4 Arquivos em .cpp contendo os exercícios.

## _Exercicio 1_

_Implemente um programa que ordene em ordem crescente por meio de
laços de repetição. O momento da troca entre os valores de 2 variáveis deve ser
realizado por meio de uma função._

```shell

/*  Implemente um programa que ordene em ordem crescente por meio de
laços de repetição. O momento da troca entre os valores de 2 variáveis deve ser
realizado por meio de uma função. */
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include<stdio.h>   
#include<stdlib.h>  
#include<iostream>
#include<locale.h> 
#include<time.h>

int separa (int i, int j);

main ()
{
int g,h,m,i,j,aux,c,a,b;	
setlocale(LC_ALL, "ptb");
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 1 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("--------------------------------------------------------------\n\n"); 
printf(" Insira a quantidade de Numeros que deseja que seja ordenados  \n\n");
printf("--------------------------------------------------------------\n\n");
scanf("%d",&m); 
system("cls");

int matriz[m];
srand(time(NULL));

for(i=0;i<m;i++)
{                                 
	matriz[i] = 0;              
}
printf("\n");

for(i=0;i<m;i++)
	{                                               
	c = rand() % 11;
	printf("-----------------------------------\n\n");
	printf(" Numero aleatorio da matriz %d é %d  \n\n",i+1,c);
	matriz[i] = c;
			for(g=0;g<m;g++)
		{                                        
			printf(" %d  \t",matriz[g]);          
		}
		printf("\n");
		printf("-----------------------------------\n\n");
		system("pause");
		system("cls");
	}

for( i=0; i<m; i++ )
{
   for( j=i+1; j<m; j++ )
{  
	a =  matriz[i];
	b = matriz[j];
	if (separa (a,b) == 1)
	{
		aux = matriz[i];
		matriz[i] = matriz[j];
		matriz[j] = aux;
	}
	
}
}
printf("-----------------------------------\n\n");
printf("Ordenado com sucesso!\n\n");
	   for(i=0;i<=m-1;i++)
	   {
						printf(" %d \t",matriz[i]);
	   }     
printf("\n\n");        
printf("-----------------------------------\n\n");       
system("pause");
system("cls");

}

int separa (int i, int j){
	if( i > j )
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
```

## _Exercicio 2_

_O programa deve calcular o fatorial de um número inteiro digitado pelo
usuário. O fatorial deve ser calculado por uma função. O programa deve
apresentar o resultado final ao usuário._

```shell
/*O programa deve calcular o fatorial de um número inteiro digitado pelo
usuário. O fatorial deve ser calculado por uma função. O programa deve
apresentar o resultado final ao usuário. */
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
printf(" Ola ! Este é o Exercicio 2 \n\n"); 
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
printf(" O fatorial de %d é : %d \n\n", aux,fat);
return 0;
}
```

## _Exercicio 3_

_Um número a é dito permutação de um número b se os dígitos de a
formam uma permutação dos dígitos de b._

_Exemplo: 5412434 é uma permutação de 4321445, mas não é uma
permutação de 4312455. Considere que o dígito 0 (zero) não aparece nos
números._

a) _Faça uma função contadigitos que dado um número inteiro 𝑛 e um
número inteiro 𝑑, ambos digitados pelo usuário, onde 0 ≤ 𝑑 ≤ 9,
devolve quantas vezes o dígito 𝑑 aparece em 𝑛._

b) _Usando a função do item anterior, faça um programa que leia dois
números inteiros positivos 𝑎 e 𝑏 e responda se 𝑎 é permutação de 𝑏._

```shell
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
```

## _Exercicio 4_

_Implemente as indicações a seguir:_

a) _Faça uma função arctan que receba um número real 𝑥 ∈ [0,1] e devolva
uma aproximação do arco tangente de 𝑥 (em radianos) por meio da série
a seguir incluindo todos os termos da série_

<img src="https://github.com/ScenioMathias/APL-2/blob/main/Lista%20de%20Atividades%2004/arctan.png?raw=true" alt="smashupy" width="280"/>


_Incluindo todos os termos da série até_

<img src="https://github.com/ScenioMathias/APL-2/blob/main/Lista%20de%20Atividades%2004/Image.png?raw=true" alt="smashupy" width="100"/>

b) _Faça uma função ângulo que receba um ponto de coordenadas cartesianas
reais (𝑥, 𝑦), com 𝑥 ≥ 0 e 𝑦 ≥ 0, digitadas pelo usuário, e devolva o
ângulo formado pelo vetor (𝑥, 𝑦) e o eixo horizontal._

_Exemplo: Observe a figura abaixo e verifique que os ângulos
correspondentes aos pontos marcados é aproximadamente_
```shell
#include<stdio.h>
#include<stdlib.h>  
#include<locale.h> 
#define PI 3.14

// prototipo da funcao
float angulo(float x, float y);
float arctan(float x);
float graus(float x);

int main() {
setlocale(LC_ALL, "ptb");  
int i, n;
float x, y, xmin, ymin, angmin, ang;
printf("-----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 3-2 \n\n"); 
printf("-----------------------------\n\n"); 
system("pause");
system("cls");
printf("---------------------- INICIO  ----------------------\n\n"); 
printf(" Insira quantos valores (x,y) deseja inserir : \n\n ");
printf("----------------------------------------------------- \n");
scanf("%d", &n);
system("cls");                                         // comando para limpar tela

angmin = 900;
xmin = 0;
ymin = 0;  

for (i = 0; i < n; i++){
printf("------------------------------------------------- \n");
printf("Agora digite as coordenadas de um ponto: (X,Y)\n\n");	
printf("------------------------------------------------- \n");
scanf("%f %f", &x, &y);
ang = angulo(x,y);
if (ang < angmin){
angmin = ang;
xmin = x;
ymin = y;
}
system("cls");                                         // comando para limpar tela    
}
printf("----------------------- RESULTADO  ----------------------- \n\n");
printf(" O Ponto com menor angulação é: x - %2.2f  y - %2.2f\n\n", xmin, ymin);
printf(" O Menor angulo deste ponto é: %f\n\n", angmin);
printf("---------------------------------------------------------- \n");
system("pause");                                        // comando para dar pause no codigo 
system("cls");                                         // comando para limpar tela    
return 0;
}

float angulo(float x, float y) {
float resp;

if (x == 0 && y == 0) 
return -1;
if (x >= y)
if (x != 0)
	resp =  graus(arctan(y/x));
else
	resp = 90;
else
	if (y != 0)
		resp = graus(PI/2 - arctan(x/y));
	else
		resp = 0;

return resp;
}

float arctan(float x) {
int A;
float termo, soma, eps;

eps = 0.0001;
termo = x;
soma = x;
A = 1;
while (termo*termo > eps*eps){
A = A+2;
termo = -termo*x*x*(A-2)/A;
soma = soma + termo;
}

return soma;
}

float graus(float x) {

return 180*x/PI;
}
```

