/* Equação do 2° grau. */
#include <math.h>
#include <stdio.h>
#include <locale.h>
main (){
  setlocale(LC_ALL, "Portuguese");
  int a,b,c;
  float x1,x2,d;
  printf("\n Para calcularmos uma equação do 2º grau insira os valores dos coeficientes numéricos.");
  printf("\n Coeficiente A: ");
  scanf("%d",&a);
  printf("\n Coeficiente B: ");
  scanf("%d",&b);
  printf("\n Coeficiente C: ");
  scanf("%d",&c);
  system("cls");
  if(a==0)
    {
    printf("\n Não é equação do 2° grau, pois, o valor de A é 0.");
    } 
  else
  {
    d = (b*b)-(4*a*c);
    if(d<0)
      {
    	printf("\n A equação não possui raízes reais, pois, o valor do delta é menor que 0.");	
      }
	else 
	  {
    	if (d==0)
       {
    	x1 = -b/(2*a);
    	printf("\n A equação possui raízes reais iguais, pois, o valor de delta é igual a 0.");
    	printf("\n Raiz: %f",x1);
	   }
	    else
		{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("\n A equação possui duas raízes reais e distintas, pois, o valor de delta é maior que 0.");
		printf("\n Raiz 1: %2.2f \n Raiz 2: %2.2f",x1,x2);
	    }		
	  }    
  }
}
