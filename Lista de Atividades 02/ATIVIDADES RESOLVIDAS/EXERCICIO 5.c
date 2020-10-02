#include <math.h>
#include <stdio.h>

main()
{
     int  quant, constt, contador; 
     float result, denom; 
     
     printf("Entre com a quantidade de numeros calculados para phi \n");
     scanf("%d",&quant);
     
     constt = 1; 
     denom = 1;
     contador = 0;
     while(contador < quant)
     {
     	result = (constt + 1/denom);
     	denom = result;
     	contador = contador + 1;
	 }
	 printf("resultado: %3f  ", result);
	 
	 return 0;

}
