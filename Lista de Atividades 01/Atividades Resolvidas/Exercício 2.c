/*  calcular a quilometragem por litro que um dado ve�culo faz */ 
#include <math.h>
#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int i,j;
    float k;
    printf("\n Para calcularmos a quilometragem por litro que um dado ve�culo faz, insira os valores abaixo.");
    printf("\n Digite a quilometragem percorrida pelo veiculo: ");
    scanf("%d",&i);
    printf(" Digite a quantidade de combust�vel utilizado pelo veiculo: ");
    scanf("%d",&j);
    k=(float) i/j;
    printf("\n Seu veiculo faz  %2.2f quil�metros por litros.", k);
}
