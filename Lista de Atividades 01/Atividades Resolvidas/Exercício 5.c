/*  falso ou verdadeiro  */ 
#include <math.h>
#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
    int i,j;
    printf("digite dois números: ");
    scanf("%d%d",&i,&j);
    printf("%d == %d é %d\n",i,j,i==j);
    printf("%d != %d é %d\n",i,j,i!=j);
    printf("%d <= %d é %d\n",i,j,i<=j);
    printf("%d >= %d é %d\n",i,j,i>=j);
    printf("%d < %d é %d\n",i,j,i< j);
    printf("%d > %d é %d\n",i,j,i> j);
}
