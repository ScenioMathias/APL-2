#include<locale.h>
#include<iostream>
#include<time.h>
#include<cstdlib>>		

int main() {

setlocale(LC_ALL, "Portuguese");

int vald, Dp, Ds, ADp, AbDp, ADs, AbDs;
ADp = 0;
ADs = 0;
AbDp = 0;
AbDs = 0;
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 2 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("------ < Digite a dimensão da matriz quadrada > ------\n\n");
scanf("%d",&vald);
system("cls");
int Matriz[vald] [vald];

srand(time(NULL));

for (int i=0; i<vald; i++)
    {
         for (int j=0; j<vald; j++) 
         {
	         Matriz[i][j] = rand()%101;
	     }
    }	
    
printf("----- Sua Matriz Gerada Ficou desta forma --------\n\n"); 

for (int i=0; i<vald; i++) 
     {
         for (int j=0; j<vald; j++) 
		{
         	printf("\t");
         	printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }
    
printf("\n\n");

for (int i=0; i<vald; i++)
    {
         for (int j=0; j<vald; j++) 
		 {
	          if (i == j) 
		       	Dp += Matriz[i][j]; 
	          if ((i + j) == (vald - 1)) 
		     	Ds += Matriz[i][j];
	          if (i<j)
	     		ADp += Matriz[i][j];
	          if ((i+j)<= vald-2)
		     	ADs += Matriz[i][j];
	          if (i>j)
		     	AbDp += Matriz[i][j];
	          if ((i+j) >= (vald))
		     	AbDs += Matriz[i][j];   
     	}
    }
	
Ds = Ds-1 ;
printf("--------------- Operações aditivas ---------------\n\n"); 
printf(" Soma da diagonal Diagonal Principal: %d \n\n", Dp);
printf(" Soma da diagonal Diagonal Secundaria: %d \n\n", Ds);
printf(" Soma dos números Acima da Diagonal Principal:  %d \n\n",  ADp);
printf(" Soma dos números Acima da Diagonal Secundaria: %d \n\n",  ADs);
printf(" Soma dos números Abaixo da Diagonal Principal: %d \n\n",  AbDp);
printf(" Soma dos números Abaixo da Diagonal Secundaria: %d \n\n", AbDs);
system("pause");
system("cls");
} 



