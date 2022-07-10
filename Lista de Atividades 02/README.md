# Lista de Atividades 02 

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## _Anunciado das atividades_ 

* Arquivo .pdf com enunciado das 5 atividades.

## _Atividades Resolvidas_

* 5 Arquivos em .c contendo os exercícios.

## _Exercício 1_

_Por meio dos exercícios realizados em sala de aula, resolva o cálculo de
uma equação de 2º grau no modelo 𝑎𝑥
2 + 𝑏𝑥 + 𝑐 = 0 onde é solicitado ao
usuário entrar com os valores de 𝑎, 𝑏 e 𝑐. Apresentar ao usuário as raízes da
equação._

```shell
/* Equação do 2° grau. */
#include <math.h>
#include <stdio.h>
#include <locale.h>
main (){
  setlocale(LC_ALL, "Portuguese");
  int a,b,c;
  float x1,x2,d;
  printf("\n Para calcularmos uma equação do 2º grau insira os valores dos coeficientes numéricos.");
  printf("\n Coeficiente A: ");
  scanf("%d",&a);
  printf("\n Coeficiente B: ");
  scanf("%d",&b);
  printf("\n Coeficiente C: ");
  scanf("%d",&c);
  system("cls");
  if(a==0)
    {
    printf("\n Não é equação do 2° grau, pois, o valor de A é 0.");
    } 
  else
  {
    d = (b*b)-(4*a*c);
    if(d<0)
      {
    	printf("\n A equação não possui raízes reais, pois, o valor do delta é menor que 0.");	
      }
	else 
	  {
    	if (d==0)
       {
    	x1 = -b/(2*a);
    	printf("\n A equação possui raízes reais iguais, pois, o valor de delta é igual a 0.");
    	printf("\n Raiz: %f",x1);
	   }
	    else
		{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("\n A equação possui duas raízes reais e distintas, pois, o valor de delta é maior que 0.");
		printf("\n Raiz 1: %2.2f \n Raiz 2: %2.2f",x1,x2);
	    }		
	  }    
  }
}

```
## _Exercício 2_
_A partir da entrada de 4 valores inteiros, informe: qual o maior e qual o
menor valor entre eles; quais são pares e ímpares; e os apresente na ordem
crescente._

```shell
/* Através da entrada de 4 números, informaremos qual o maior e qual o menor valor entre eles; quais são pares e ímpares; e se existe algum número, entre os valores inseridos, que é divisor de um outro. */
#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,n4,par,negativo;
    printf(" Este programa através da entrada de 4 números inteiros positivos,");
    printf(" ira mostrar qual dos números é o maior entre eles,\n"); 
	printf(" se são pares ou impar e se são divisíveis entre eles.\n");
    
	do{
    printf(" Digite o primeiro número: ");
    scanf("%d",&n1);}
	while(n1<1);
	do{
    printf(" Digite o segundo número: ");
    scanf("%d",&n2);
    }while(n2<1);
    do{
    printf(" Digite o terceiro número: ");
    scanf("%d",&n3);
    }while(n3<1);
    do{
    printf(" Digite o quarto número: ");
    scanf("%d",&n4);
	}while(n4<1);
    
    if ((n1>=n2) && (n1>=n3) && (n1>=n4)){
        printf("\n O maior número inserido foi: %d",n1);
        }
    else
    {
      if ((n2>=n1) && (n2>=n3) && (n2>=n4)){
          printf("\n O maior número inserido foi: %d",n2);
          }
      else
      {
          if ((n3>=n1) && (n3>=n2) && (n3>=n4)){
              printf("\n O maior número inserido foi: %d",n3);
              }
          else
          {
              if ((n4>=n1) && (n4>=n2) && (n4>=n3)){
                  printf("\n O maior número inserido foi: %d",n4);
                  }
        }
      }
    }
    if ((n1<=n2) && (n1<=n3) && (n1<=n4)){
        printf("\n O menor número inserido foi: %d",n1);
        }
    else
    {
      if ((n2<=n1) && (n2<=n3) && (n2<=n4)){
          printf("\n O menor número inserido foi: %d",n2);
          }
      else
      {
          if ((n3<=n1) && (n3<=n2) && (n3<=n4)){
              printf("\n O menor número inserido foi: %d",n3);
              }
          else
          {
              if ((n4<=n1) && (n4<=n2) && (n4<=n3)){
                  printf("\n O menor número inserido foi: %d",n4);
                  }
          }
       }
    }
    if ( n1 % n2 == 0){
        printf("\n O número %d é divisível por %d.",n1,n2);
    }
    
    if (n2 % n1 == 0){
    printf("\n O número %d é divisível por %d.",n2,n1);
    }        
        
    if (n1 % n3 == 0){
    printf("\n O número %d é divisível por %d.",n1,n3);
    }
            
    if (n3 % n1 == 0){
    printf("\n O número %d é divisível por %d.",n3,n1);
    }
                
    if (n1 % n4 == 0){
    printf("\n O número %d é divisível por %d.",n1,n4);
    }
                   
    if (n4 % n1 == 0){
    printf("\n O número %d é divisível por %d.",n4,n1);
    }
                        
    if (n2 % n3 == 0){
    printf("\n O número %d é divisível por %d.",n2,n3);
    }
                            
    if (n3 % n2 == 0){
    printf("\n O número %d é divisível por %d.",n3,n2);
    }
                                
    if (n4 % n2 == 0){
    printf("\n O número %d é divisível por %d.",n4,n2);
    }
                                    
    if (n2 % n4 == 0){
    printf("\n O número %d é divisível por %d.",n2,n4);
    }
                                       
    if (n4 % n3 == 0){
    printf("\n O número %d é divisível por %d.",n4,n3);
    }
                                          
    if (n3 % n4 == 0){
    printf("\n O número %d é divisível por %d.",n3,n4);
    }
    
    if (n1 % 2 == 0 ){
        printf("\n O número %d é par!",n1);
    }
    else {
        printf("\n O número %d é impar!",n1);
    }
    if (n2 % 2 == 0 ){
        printf("\n O número %d é par!",n2);
    }
    else {
        printf("\n O número %d é impar!",n2);
    }
    if (n3 % 2 == 0 ){
        printf("\n O número %d é par!",n3);
    }
    else {
        printf("\n O número %d é impar!",n3);
    }
    if (n4 % 2 == 0 ){
        printf("\n O número %d é par!",n4);
    }
    else {
        printf("\n O número %d é impar!",n4);
    }
}
```

## _Exercício 3_

_Duas cidades A e B têm populações de 7.000 e 20.000 habitantes,
respectivamente. A cidade A tem um crescimento populacional de 3,5% ao ano,
enquanto a população da cidade B cresce 1% ao ano. Implemente um programa
que calcule em quantos anos a população da cidade A será maior ou igual à
população da cidade B._

```shell
/*calcular em quantos anos a população da cidade A será maior ou igual à população da cidade B.*/
#include <math.h>
#include<stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int cont;
    float b,a,f;
    printf("\n Duas cidades A e B têm populações de 7.000 e 20.000 habitantes, respectivamente.\n");
    printf("\n A cidade A tem um crescimento populacional de 3,5 porcento ao ano, enquanto a população da cidade B cresce 1 porcento   ao ano.\n");
    printf("\n Este programa calcula em quantos anos a população da cidade A será maior ou igual à população da cidade B.\n"); 
    cont = 0;
    b = 20000;
    a = 7000;
    while (a<=b){
    	a = a*1.035;
        b = b*1.01;	
	    cont = cont+1; 
       }
    printf("\n A cidade 'A' levara %d ano(s) para alcançar ou ultrapassar cidade B. ",cont);
}
```
## _Exercício 4_
_Elabore um programa que calcule se um determinado número inteiro,
digitado pelo usuário, representa um número primo._
```shell
/* Calculo para determinar se o número inserido é primo. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"Portuguese");
  int i, x; 
  int div = 0;
  
  do {
    system("cls");
    printf("Para determinarmos se o número é primo, digite um número inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O número %d é primo!", x);
  else
    printf("O número %d não é primo!", x);

  return 0;
}
```

## _Exercício 5_
_Proporção áurea, número de ouro, número áureo, secção áurea, proporção
de ouro, são alguns dos diversos nomes para a constante real algébrica irracional
denotada pela letra grega ϕ (phi), em homenagem ao escultor Phideas, que
a teria utilizado para conceber o Parthenon, e com o valor arredondado a
três casas decimais de 1,618. O número de ouro está presente na natureza
nos mais diversos aspectos como num pentagrama regular, proporção
entre abelhas fêmeas e machos, concha de um caramujo, proporção entre
a altura de um ser humano e sua altura do umbigo ao chão, entre diversas
outros. Mas como se calcula um número como esse, ou como se chega a um
valor mais aproximado possível. Bem, aqui serão indicadas duas formas
para a realização deste cálculo, onde o aluno deve escolher QUAL
implementar:_
_Forma 1: Série de frações – o número de ouro pode ser obtido por
uma série de frações contínuas, representada a seguir:_

<img src="https://github.com/ScenioMathias/APL-2/blob/main/Lista%20de%20Atividades%2002/Forma1.png?raw=true" alt="smashupy" width="200"/>

_A aproximação do número áureo as indicações [𝑎, 𝑏, 𝑐, 𝑑, 𝑒, … ] são substituídas
pelo número 1. A partir disso, implemente um algoritmo que calcule o número
áureo que solicite ao usuário que entre com um valor inteiro, e este represente
a quantidade de termos, ou seja, a quantidade de “uns” que devem ser inseridos
na fórmula. Para uma maior quantidade de termos, a quantidade de frações
aumente._

_Forma 2: Série de raízes – um pouco diferente, mas com o mesmo
conceito da Forma 1 a série de raízes também trabalha com termos de um onde
as contas, conforme se caminha na série, vão se modificando. A quantidade de
raízes é a quantidade de termos em que se deseja aproximar o número áureo. A
partir disso, implemente um algoritmo que calcule o número áureo que solicite
ao usuário que entre com um valor inteiro, e este represente a quantidade de
termos, ou seja, a quantidade de raízes que devem ser inseridos na fórmula. Para
uma maior quantidade de termos, a quantidade de frações aumente. A fórmula
se encontra a seguir:_

<img src="https://github.com/ScenioMathias/APL-2/blob/main/Lista%20de%20Atividades%2002/Forma2.png?raw=true" alt="smashupy" width="200"/>

```shell
#include <math.h>
#include <stdio.h>

main()
{
     int  quant, constt, contador; 
     float result, denom; 
     
     printf("Entre com a quantidade de numeros calculados para phi \n");
     scanf("%d",&quant);
     
     constt = 1; 
     denom = 1;
     contador = 0;
     while(contador < quant)
     {
     	result = (constt + 1/denom);
     	denom = result;
     	contador = contador + 1;
	 }
	 printf("resultado: %3f  ", result);
	 
	 return 0;

}
```
