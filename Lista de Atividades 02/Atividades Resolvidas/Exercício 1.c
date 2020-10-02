/* Equa��o do 2� grau. */
#include <math.h>
#include <stdio.h>
#include <locale.h>
main (){
  setlocale(LC_ALL, "Portuguese");
  int a,b,c;
  float x1,x2,d;
  printf("\n Para calcularmos uma equa��o do 2� grau insira os valores dos coeficientes num�ricos.");
  printf("\n Coeficiente A: ");
  scanf("%d",&a);
  printf("\n Coeficiente B: ");
  scanf("%d",&b);
  printf("\n Coeficiente C: ");
  scanf("%d",&c);
  system("cls");
  if(a==0)
    {
    printf("\n N�o � equa��o do 2� grau, pois, o valor de A � 0.");
    } 
  else
  {
    d = (b*b)-(4*a*c);
    if(d<0)
      {
    	printf("\n A equa��o n�o possui ra�zes reais, pois, o valor do delta � menor que 0.");	
      }
	else 
	  {
    	if (d==0)
       {
    	x1 = -b/(2*a);
    	printf("\n A equa��o possui ra�zes reais iguais, pois, o valor de delta � igual a 0.");
    	printf("\n Raiz: %f",x1);
	   }
	    else
		{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("\n A equa��o possui duas ra�zes reais e distintas, pois, o valor de delta � maior que 0.");
		printf("\n Raiz 1: %2.2f \n Raiz 2: %2.2f",x1,x2);
	    }		
	  }    
  }
}
