# Lista de Atividades 01 

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## _Anunciado das atividades_ 
* Arquivo .pdf com enunciado das 5 atividades.
## _Atividades Resolvidas_
* 2 Arquivo em .cpp contendo os exercícios 1 e 4.
* 3 Arquivo em .c contendo os exercícios 2,3 e 5.

## _Exercício 1_

_Construir um programa que apresente o tamanho em kbytes que alguns
tipos de variáveis possuem. Os tipos de variáveis a serem verificados são: int,
lont int, unsigned int, float, double, long double, char para 1 caracter somente.
Deve ser utilizada a funcionalidade “sizeof()”._

```shell
#include <stdlib.h>
#include <stdio.h>

main()

{
char a;
long int b;
long double c;
unsigned char d;
int e;
unsigned int f;
float g;
double h;
printf("\nchar\n     %d\n",sizeof(a));
printf("\nlong int\n     %d\n", sizeof(b));
printf("\nlong double\n     %d\n", sizeof(c));
printf("\nunsigned char\n     %d\n",sizeof(d));
printf("\nint\n     %d\n",sizeof(e));
printf("\nunsigned int\n     %d\n",sizeof(f));
printf("\nfloat\n     %d\n", sizeof(g));
printf("\ndouble\n     %d\n", sizeof(h));
}

```
## _Exercício 2_

_Calcular a quilometragem por litro que um veículo faz. Para isso o
usuário deve inserir a quilometragem rodada e a quantidade de combustível
gasta. Exibir a mensagem final para o usuário de quantos quilômetros o
automóvel faz por litro de combustível._

```shell
/*  calcular a quilometragem por litro que um dado veículo faz */ 
#include <math.h>
#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int i,j;
    float k;
    printf("\n Para calcularmos a quilometragem por litro que um dado veículo faz, insira os valores abaixo.");
    printf("\n Digite a quilometragem percorrida pelo veiculo: ");
    scanf("%d",&i);
    printf(" Digite a quantidade de combustível utilizado pelo veiculo: ");
    scanf("%d",&j);
    k=(float) i/j;
    printf("\n Seu veiculo faz  %2.2f quilômetros por litros.", k);
}

```

## _Exercício 3_

_Solicitar ao usuário que este digite dois valores, e então mostre na tela o
quadrado das somas e a soma dos quadrados, dos valores inseridos._

```shell
/*  Quadrado das somas e a soma dos quadrados */
#include<stdio.h>
#include<math.h>
#include<locale.h>
 main()
{
	setlocale(LC_ALL, "Portuguese");
     int i,j,k,l;
     printf("\n O usuário deve inserir dois valores, para então realizarmos o quadrado das somas e a soma dos quadrados.");
     printf("\n Digite o primeiro numero: ");
     scanf("%d",&i);
     printf(" Digite o  segundo numero: ");
     scanf("%d",&j);
     k = i+j;
     k = k*k;
     printf("\n Quadrado das somas: %d", k);
     l = k+k;
     printf("\n Soma dos quadrados: %d", l);


}

```
## _Exercício 4_

_O programa deve solicitar ao usuário que insira seus dados como nome,
cpf, rg, idade, peso, sexo (M ou F) e apresentar estes dados ao final._

```shell

/*  solicitar ao usuário que insira seus dados */ 
#include<stdio.h>   
#include<stdlib.h>  
#include<locale.h>
#include<math.h>
#include<string.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int j,k,i;
    char m,n[16];
    float l;
    printf("**************************\n\n");
    printf(" Ola! Digite seus dados \n\n");
    printf(" Digite seu primeiro nome: \n\n");
    printf("**************************\n");
    scanf("%s",&n);
    system("cls");
    printf("**************************\n\n");
    printf(" Ola! Digite seus dados \n\n");
    printf(" Digite seu CPF : \n\n");
    printf("**************************\n");
    scanf("%d",&i);
    system("cls");
    printf("**************************\n\n");
    printf(" Ola! Digite seus dados \n\n");
    printf(" Digite seu RG : \n\n");
    printf("**************************\n");
    scanf("%d",&j);
    system("cls");
    printf("**************************\n\n");
    printf(" Ola! Digite seus dados \n\n");
    printf(" Digite sua IDADE : \n\n");
    printf("**************************\n");
    scanf("%d",&k);
    system("cls");
    printf("**************************\n\n");
    printf(" Ola! Digite seus dados \n\n");
    printf(" Digite seu PESO : \n\n");
    printf("**************************\n");
    scanf("%f",&l);
    system("cls");
    do
     {	
     	printf("**************************\n\n");
        printf(" Ola! Digite seus dados \n\n");
        printf(" Digite seu SEXO  : \n\n");
        printf(" M - Masculino \n");
        printf(" F - Feminino \n\n");
        printf("**************************\n");
    	scanf("%c",&m);
    	system("cls");
	}while ((m != 'M') && (m != 'F'));
	
	printf("****************************************************\n\n");
	printf(" Os dados inseridos foram salvos da seguinte forma: \n\n");
	printf(" Seu NOME é: %s\n\n",n);
    printf(" Seu CPF é: %d\n\n",i);
    printf(" Seu RG é: %d\n\n",j);
    printf(" Sua IDADE é: %d\n\n",k);
    printf(" Seu PESO é: %0.2fKg\n\n",l); 
    printf(" Seu SEXO é: %c\n",m);
    printf(" M - Masculino \n");
    printf(" F - Feminino \n\n");
	printf("****************************************************\n\n");  
	  
    
    
    
}
```

## _Exercício 5_

_Implementar o programa ilustrado no slide 19, da direita, da
apresentação em power-point, que informa os resultados em 1 e 0 (verdadeiro
e falso) entre as operações entre dois valores inteiros._

```shell

/*  falso ou verdadeiro  */ 
#include <math.h>
#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int i,j;
    printf("digite dois números: ");
    scanf("%d%d",&i,&j);
    printf("%d == %d é %d\n",i,j,i==j);
    printf("%d != %d é %d\n",i,j,i!=j);
    printf("%d <= %d é %d\n",i,j,i<=j);
    printf("%d >= %d é %d\n",i,j,i>=j);
    printf("%d < %d é %d\n",i,j,i< j);
    printf("%d > %d é %d\n",i,j,i> j);
}

```
