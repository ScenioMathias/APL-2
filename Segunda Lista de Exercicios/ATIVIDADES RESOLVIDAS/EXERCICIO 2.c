/* Atrav�s da entrada de 4 n�meros, informaremos qual o maior e qual o menor valor entre eles; quais s�o pares e �mpares; e se existe algum n�mero, entre os valores inseridos, que � divisor de um outro. */
#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,n4,par,negativo;
    printf(" Este programa atrav�s da entrada de 4 n�meros inteiros positivos,");
    printf(" ira mostrar qual dos n�meros � o maior entre eles,\n"); 
	printf(" se s�o pares ou impar e se s�o divis�veis entre eles.\n");
    
	do{
    printf(" Digite o primeiro n�mero: ");
    scanf("%d",&n1);}
	while(n1<1);
	do{
    printf(" Digite o segundo n�mero: ");
    scanf("%d",&n2);
    }while(n2<1);
    do{
    printf(" Digite o terceiro n�mero: ");
    scanf("%d",&n3);
    }while(n3<1);
    do{
    printf(" Digite o quarto n�mero: ");
    scanf("%d",&n4);
	}while(n4<1);
    
    if ((n1>=n2) && (n1>=n3) && (n1>=n4)){
        printf("\n O maior n�mero inserido foi: %d",n1);
        }
    else
    {
      if ((n2>=n1) && (n2>=n3) && (n2>=n4)){
          printf("\n O maior n�mero inserido foi: %d",n2);
          }
      else
      {
          if ((n3>=n1) && (n3>=n2) && (n3>=n4)){
              printf("\n O maior n�mero inserido foi: %d",n3);
              }
          else
          {
              if ((n4>=n1) && (n4>=n2) && (n4>=n3)){
                  printf("\n O maior n�mero inserido foi: %d",n4);
                  }
        }
      }
    }
    if ((n1<=n2) && (n1<=n3) && (n1<=n4)){
        printf("\n O menor n�mero inserido foi: %d",n1);
        }
    else
    {
      if ((n2<=n1) && (n2<=n3) && (n2<=n4)){
          printf("\n O menor n�mero inserido foi: %d",n2);
          }
      else
      {
          if ((n3<=n1) && (n3<=n2) && (n3<=n4)){
              printf("\n O menor n�mero inserido foi: %d",n3);
              }
          else
          {
              if ((n4<=n1) && (n4<=n2) && (n4<=n3)){
                  printf("\n O menor n�mero inserido foi: %d",n4);
                  }
          }
       }
    }
    if ( n1 % n2 == 0){
        printf("\n O n�mero %d � divis�vel por %d.",n1,n2);
    }
    
    if (n2 % n1 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n2,n1);
    }        
        
    if (n1 % n3 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n1,n3);
    }
            
    if (n3 % n1 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n3,n1);
    }
                
    if (n1 % n4 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n1,n4);
    }
                   
    if (n4 % n1 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n4,n1);
    }
                        
    if (n2 % n3 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n2,n3);
    }
                            
    if (n3 % n2 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n3,n2);
    }
                                
    if (n4 % n2 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n4,n2);
    }
                                    
    if (n2 % n4 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n2,n4);
    }
                                       
    if (n4 % n3 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n4,n3);
    }
                                          
    if (n3 % n4 == 0){
    printf("\n O n�mero %d � divis�vel por %d.",n3,n4);
    }
    
    if (n1 % 2 == 0 ){
        printf("\n O n�mero %d � par!",n1);
    }
    else {
        printf("\n O n�mero %d � impar!",n1);
    }
    if (n2 % 2 == 0 ){
        printf("\n O n�mero %d � par!",n2);
    }
    else {
        printf("\n O n�mero %d � impar!",n2);
    }
    if (n3 % 2 == 0 ){
        printf("\n O n�mero %d � par!",n3);
    }
    else {
        printf("\n O n�mero %d � impar!",n3);
    }
    if (n4 % 2 == 0 ){
        printf("\n O n�mero %d � par!",n4);
    }
    else {
        printf("\n O n�mero %d � impar!",n4);
    }
}
