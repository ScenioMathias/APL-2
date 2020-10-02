#include<stdio.h>
#include<stdlib.h>  
#include<locale.h> 
#define PI 3.14

// prototipo da funcao
float angulo(float x, float y);
float arctan(float x);
float graus(float x);

int main() {
setlocale(LC_ALL, "ptb");  
int i, n;
float x, y, xmin, ymin, angmin, ang;
printf("-----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 3-2 \n\n"); 
printf("-----------------------------\n\n"); 
system("pause");
system("cls");
printf("---------------------- INICIO  ----------------------\n\n"); 
printf(" Insira quantos valores (x,y) deseja inserir : \n\n ");
printf("----------------------------------------------------- \n");
scanf("%d", &n);
system("cls");                                         // comando para limpar tela

angmin = 900;
xmin = 0;
ymin = 0;  

for (i = 0; i < n; i++){
printf("------------------------------------------------- \n");
printf("Agora digite as coordenadas de um ponto: (X,Y)\n\n");	
printf("------------------------------------------------- \n");
scanf("%f %f", &x, &y);
ang = angulo(x,y);
if (ang < angmin){
angmin = ang;
xmin = x;
ymin = y;
}
system("cls");                                         // comando para limpar tela    
}
printf("----------------------- RESULTADO  ----------------------- \n\n");
printf(" O Ponto com menor angulação é: x - %2.2f  y - %2.2f\n\n", xmin, ymin);
printf(" O Menor angulo deste ponto é: %f\n\n", angmin);
printf("---------------------------------------------------------- \n");
system("pause");                                        // comando para dar pause no codigo 
system("cls");                                         // comando para limpar tela    
return 0;
}

float angulo(float x, float y) {
float resp;

if (x == 0 && y == 0) 
return -1;
if (x >= y)
if (x != 0)
	resp =  graus(arctan(y/x));
else
	resp = 90;
else
	if (y != 0)
		resp = graus(PI/2 - arctan(x/y));
	else
		resp = 0;

return resp;
}

float arctan(float x) {
int A;
float termo, soma, eps;

eps = 0.0001;
termo = x;
soma = x;
A = 1;
while (termo*termo > eps*eps){
A = A+2;
termo = -termo*x*x*(A-2)/A;
soma = soma + termo;
}

return soma;
}

float graus(float x) {

return 180*x/PI;
}
