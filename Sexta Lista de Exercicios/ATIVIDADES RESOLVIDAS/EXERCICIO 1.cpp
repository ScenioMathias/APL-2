#include <stdlib.h>           // Bibliotecas 
#include <stdio.h>           //
#include <math.h>           //
#include <stdio.h>         //
#include <locale.h>       //
#include <stdlib.h>      //

int main() {
    setlocale(LC_ALL,"Portuguese");	  // comando para reconhecimento de caracteres e palavras com acentuaçao 
	int vet[10], i, k,aux;
    aux=1;
    printf(" ---------------------- INICIO ---------------------- \n\n");
    printf(" Iniciando o vetor com determinados valores. \n\n");
    printf(" Cada elemento possui o valor do proximo elemento  \n");
    printf(" do vetor a ser lido.  \n\n");
    vet[0] = 5;
    vet[1] = 5;
    vet[2] = 7;
    vet[3] = 6;
    vet[4] = 9;
    vet[5] = 2;
    vet[6] = 8;
    vet[7] = 4;
    vet[8] = 0;
    vet[9] = 3;
	for (i=1; i<10; i++) {
		printf("\t %d -> | %d | \n",i,vet[i]);
	}
    printf(" ---------------------------------------------------- \n\n");
    system("pause");                                                                           // comando para dar pause no codigo
	system("cls");                                                                            // comando para limpar tela
	printf(" --------------------- RESULTADO --------------------- \n\n");
	printf(" A sequência da leitura ficara da seguinte forma \n\n");
	for(k=1;k < 10; k++)
	{
		if(aux == 1 )
		    {
		     printf(" %d -> %d ->",aux,vet[aux]);
		     aux = vet[aux];
	        }
	    else
	        {
	         if (vet[aux] == 0)
			{
		       	 printf(" %d ",vet[aux]);
	        	 aux = vet[aux];
			}	
			 else
			{
	             printf(" %d -> ",vet[aux]);
	        	 aux = vet[aux];
	       	}
	        }
	}
	printf(" \n\n");
	printf(" ----------------------------------------------------- \n\n");
	system("pause");                                                                           // comando para dar pause no codigo
	system("cls");                                                                            // comando para limpar tela
	
}

    








