/*calcular em quantos anos a popula��o da cidade A ser� maior ou igual � popula��o da cidade B.*/
#include <math.h>
#include<stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int cont;
    float b,a,f;
    printf("\n Duas cidades A e B t�m popula��es de 7.000 e 20.000 habitantes, respectivamente.\n");
    printf("\n A cidade A tem um crescimento populacional de 3,5 porcento ao ano, enquanto a popula��o da cidade B cresce 1 porcento   ao ano.\n");
    printf("\n Este programa calcula em quantos anos a popula��o da cidade A ser� maior ou igual � popula��o da cidade B.\n"); 
    cont = 0;
    b = 20000;
    a = 7000;
    while (a<=b){
    	a = a*1.035;
        b = b*1.01;	
	    cont = cont+1; 
       }
    printf("\n A cidade 'A' levara %d ano(s) para alcan�ar ou ultrapassar cidade B. ",cont);
}
