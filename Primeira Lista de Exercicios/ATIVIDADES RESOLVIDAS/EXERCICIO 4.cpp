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
