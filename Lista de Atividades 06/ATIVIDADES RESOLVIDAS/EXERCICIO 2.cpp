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
	



