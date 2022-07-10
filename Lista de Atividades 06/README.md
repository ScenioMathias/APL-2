# Lista de Atividades 06 

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## Anunciado das atividades 

* Arquivo .pdf com enunciado das 2 atividades.

## Atividades Resolvidas

* 2 Arquivos em .cpp contendo os exercícios.

## _Exercicio 1_

_Considere um vetor de trajetórias de 9 elementos, onde cada elemento
possui o valor do próximo elemento do vetor a ser lido._

_Índice 1 2 3 4 5 6 7 8 9_

_Valor 5 7 6 9 2 8 4 0 3_

_Assim, a sequência da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0. Elabore o
algoritmo que faça este método de leitura no vetor acima._

```shell
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
```

## _Exercicio 2_

_Implementar um vetor de inteiros com 20 posições e as seguintes
funcionalidades:_

1. _Imprimir os valores inseridos_
2. _Inserir valor de forma ordenada_
3. _Buscar valor de forma sequencial_
4. _Buscar valor de forma ordenada_
5. _Buscar valor de forma binária_
6. _Remover valor_
7. _Sair_
8. 
_Cada funcionalidade deverá ser implementada em uma função específica._

```shell
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main (){
	
	do
	{
	    system("cls");                                                                             // limpar a tela
       	printf("-------------------- INICIO --------------------\n\n");                           // Apresentacao do menu do de seleçao 
	    printf("                <<< vetores >>>                 \n\n");                          //
	    printf(" O programa ira manipular de acordo com comandos \n");                          //
	    printf(" operaçoes em um vetor de 20 unidades.          \n\n");                        //
	    printf(" Digite uma açao:  \n\n");                                                    //
	    printf(" 1 - Imprimir os valores inseridos \n");                                     //
	    printf(" 2 - Inserir  valor de forma ordenada \n");                                 //
	    printf(" 3 - Buscar valor de forma sequencial  \n");                               //
	    printf(" 4 - Buscar valor de forma ordenada\n");                                  //
	    printf(" 5 - Buscar valor de forma binária\n");                                  //
	    printf(" 0 - sair   \n\n ");                                                    // 
	    printf("------------------------------------------------\n");                  //
	    scanf("%d", &op);                                                             // funcao para salvar valor digitado pelo usuario 
	    system("cls");                                                               // funcao para limpar tela
	    switch(op)
    	{ 
    	case 1:
            	printf("-------------- IMPRIMIR --------------\n\n");          //  apresentacao da selecao da açao Imprimir os valores inseridos, selecionado pelo usuario 
            	printf(" Parabens ! Voce escolheu 'imprimir'. \n\n");         //
            	printf("--------------------------------------\n");         //
            	printf("\n\t Insira um valor:  ");                          //
			    break; // quebra de linha
    	case 2:
               	printf("---------------	INSERIR -------------\n\n");                    //  apresentacao da selecao de Inserir  valor de forma ordenada, selecionado pelo usuario 
        	    printf(" Parabens ! Voce escolheu 'inserir'. \n\n");                   //
                printf("-------------------------------------\n");                    //
                system("pause");                                                     // funcao para pausar o sistema 
                system("cls");                                                      // funcao para limpar tela
            	printf("------------------------------------------------\n\n");    //
            	break; // quebra de linha
    	case 3:
	           	printf("------------ BUSCA SEQUENCIAL ------------\n\n");                  //  apresentacao da Buscar valor de forma sequencial, selecionado pelo usuario 
	        	printf(" Parabens ! Voce escolheu 'busca sequencial'. \n\n");             //
	        	printf("------------------------------------------\n\n");                //
	        	system("pause");                                                        // funcao para pausar o sistema 
	        	system("cls");                                                         // funcao para limpar tela      
	        	printf("------------------------------------------------\n\n");       // 
	           	break; // quebra de linha
       	case 4:
	              printf("--------------- BUSCA ORDENADA ---------------\n\n");        //  apresentacao da selecao  Buscar valor de  Buscar valor de forma ordenada, selecionado pelo usuario 
	              printf(" Parabens ! Voce escolheu 'busca ordenada'. \n\n");         //
	              printf("----------------------------------------------\n\n");      //
	              system("pause");                                                  // funcao para pausar o sistema 
	              system("cls");                                                   // funcao para limpar tela
	              printf("------------------------------------------------\n\n");
	              break; // quebra de linha
	    case 5:      
	              printf("--------------- BUSCA BINARIA ----------------\n\n");        //  apresentacao da selecao  Buscar valor de Buscar valor de forma binária, selecionado pelo usuario 
	              printf(" Parabens ! Voce escolheu 'busca ordenada'. \n\n");         //
	              printf("----------------------------------------------\n\n");      //
	              system("pause");                                                  // funcao para pausar o sistema 
	              system("cls");                                                   // funcao para limpar tela
	              printf("------------------------------------------------\n\n");
	              break; // quebra de linha
	    
		         
    	case 0:
	               printf("\n\n ... voltando ao menu principal ... \n\n");                                   // apresentacao da selecao sair, selecionado pelo usuario  
	                break; // quebra de linha
    	default:
    		    {
	               printf("-----------------------------\n\n");                                           // Apresentaçao quando o usuario digitar opcao invalida 
	               printf(" Digite uma opção válida!\n\n");                                              //
	               printf("-----------------------------\n\n");                                         //
	               system("pause");                                                                    // funcao para pausar o sistema 
	               system("cls");                                                                     // funcao para limpar tela
              	}
              	
	    }
	}while(op != 0);  // laco de repeticao 'do' 'while'
}
```
