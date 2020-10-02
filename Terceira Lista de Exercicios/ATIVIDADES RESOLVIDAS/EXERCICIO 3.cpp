
#include<stdio.h>   
#include<stdlib.h> 
#include<iostream>
#include<locale.h>  
#include<time.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int m,n,p,q,i,j,k,l,g,h,a,b,c,X;
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 3 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("--------------------------------------------------\n\n"); 
printf(" Insira a quantidade de linhas da matriz A \n\n");
printf("--------------------------------------------------\n\n");
scanf("%d",&m); 
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de Colunas da matriz A \n\n");
printf("--------------------------------------------------\n\n");
scanf("%d",&n);
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de linhas da matriz B \n\n");
printf("--------------------------------------------------\n\n"); 
scanf("%d",&p);
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de Colunas da matriz B \n\n");
printf("--------------------------------------------------\n\n"); 
scanf("%d",&q);
system("cls");

int matrizA[m][n];
int  matrizB[p][q];
float matrizC[n][p],Aux=0;
srand(time(NULL));
printf("-------------------------Matriz A ---------------------------\n\n");
printf(" Inicializando a matriz A com valor 0 em todas suas posições.\n\n");

for(i=0;i<m;i++){ //acessado as linhas da matriz
for(j=0;j<n;j++){ //acessando as colunas da matriz
	matrizA[i][j] = 0; //jogando 0 para todos os valores
	printf("%d \t",matrizA[i][j]);
}
printf("\n");
}
printf("\n\n");
printf("--------------------------------------------------------------\n\n");
printf("\n\n");
system("pause");
system("cls");

printf("-------------------------Matriz B ---------------------------\n\n");
printf(" Inicializando a matriz B com valor 0 em todas suas posições.\n\n");
for(k=0;k<p;k++){ //acessado as linhas da matriz
for(l=0;l<q;l++){ //acessando as colunas da matriz
	matrizB[k][l] = 0; //jogando 0 para todos os valores
	printf("%d \t",matrizB[k][l]);
}
printf("\n");
}
printf("\n\n");
printf("--------------------------------------------------------------\n\n");
printf("\n\n");
system("pause");
system("cls");

printf("-----------------------------------------------\n\n");
printf(" Entrando os valores por linha da matriz A \n\n");
printf("-----------------------------------------------\n\n");
system("pause");
system("cls");
for(i=0;i<m;i++){ //acessado as linhas da matriz
	for(j=0;j<n;j++){ //acessando as colunas da matriz
		//printf("\nDigite o elemento %d-%d da matriz A: ",i+1,j+1);
		c = rand() % 11;                                            
		printf("-------------- Matriz A -----------------------\n\n");
		printf(" Numero aleatorio da matriz A %d-%d é %d  \n\n",i+1,j+1,c);
		matrizA[i][j] = c;
		//scanf("%d",&matrizA[i][j]); //entrando com os valores
		for(g=0;g<m;g++){ //acessado as linhas da matriz, necessário outra variável para percorrer as linhas
			for(h=0;h<n;h++){ //acessando as colunas da matriz, necessário outra variável para percorrer as colunas
				printf("%d \t",matrizA[g][h]); //imprimindo o estado ATUAL da matriz a cada novo elemento inserido
			}
			printf("\n\n");
		}
		printf("\n\n");
		printf("-----------------------------------------------\n\n");
		system("pause");
		system("cls");
	}
}



printf("-----------------------------------------------\n\n");
printf(" Entrando os valores por linha da matriz B \n\n");
printf("-----------------------------------------------\n\n");
system("pause");
system("cls");
for(k=0;k<p;k++){ 
	for(l=0;l<q;l++){ 
		c = rand() % 11;
		printf("-------------- Matriz B -----------------------\n\n");
		printf(" Numero aleatorio da matriz B %d-%d é %d  \n\n",k+1,l+1,c);
		matrizB[k][l] = c;
		for(a=0;a<p;a++){ 
			for(b=0;b<q;b++){ 
				printf("%d \t",matrizB[a][b]); 
			}
			printf("\n\n");
		}
		printf("\n\n");
		printf("-----------------------------------------------\n\n");
		system("pause");
		system("cls");
	}
}



if(m==q)
{

 

for(i=0; i<m; i++)
{
	 for(j=0; j<q; j++)
	 {
			  matrizC[i][j]=0;
			  for(X=0; X<p; X++)
			  {
			  Aux += matrizA[i][X] * matrizB[X][j];
			  }
			  matrizC[i][j]=Aux;
			  Aux=0;
			  }
			  }
			  printf("\n\n");
printf("--------------- Matriz C Gerada pela multiplicação das matrizes A e B---------------\n\n");
for(i=0; i<m; i++)
{
	 for(j=0; j<q; j++)
	 {
	 printf("%6.f", matrizC[i][j]);
	 }
	 printf("\n\n");
	 }
	 printf("\n\n");
printf("------------------------------------------------------------------------------------\n\n");
}
else
{
printf("-------------------------------------------\n\n");
printf(" Nao ha com multiplicar as matrizes dadas  \n\n");
printf("-------------------------------------------\n\n");
}

system("pause");
system("cls");






}
