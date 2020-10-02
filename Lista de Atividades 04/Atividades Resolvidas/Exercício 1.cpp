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
