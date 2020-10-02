/*  calcular a quilometragem por litro que um dado veículo faz */ 
#include <math.h>
#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int i,j;
    float k;
    printf("\n Para calcularmos a quilometragem por litro que um dado veículo faz, insira os valores abaixo.");
    printf("\n Digite a quilometragem percorrida pelo veiculo: ");
    scanf("%d",&i);
    printf(" Digite a quantidade de combustível utilizado pelo veiculo: ");
    scanf("%d",&j);
    k=(float) i/j;
    printf("\n Seu veiculo faz  %2.2f quilômetros por litros.", k);
}
