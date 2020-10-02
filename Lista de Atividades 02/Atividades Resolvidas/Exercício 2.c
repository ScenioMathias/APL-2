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
