/*  Quadrado das somas e a soma dos quadrados */
#include<stdio.h>
#include<math.h>
#include<locale.h>
 main()
{
	setlocale(LC_ALL, "Portuguese");
     int i,j,k,l;
     printf("\n O usuário deve inserir dois valores, para então realizarmos o quadrado das somas e a soma dos quadrados.");
     printf("\n Digite o primeiro numero: ");
     scanf("%d",&i);
     printf(" Digite o  segundo numero: ");
     scanf("%d",&j);
     k = i+j;
     k = k*k;
     printf("\n Quadrado das somas: %d", k);
     l = k+k;
     printf("\n Soma dos quadrados: %d", l);


}
