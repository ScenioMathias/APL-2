
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>
 
typedef struct {
    int idade;
    char nome[200];
    float salario;
} funcionario;
 
char nome[200];
int posicao;
 
int main() {
 
int i = 0;
setlocale(LC_ALL,"portuguese");
 
for(i=0; i<5; i++) {
    funcionario[i].idade = 0;
    strcpy(funcionario[i].nome, "NULL");
    funcionario[i].salario = 0.0;
}
 
printf(" \n \n");
 
for(i=0; i<5; i++) {
    printf(" Digite a idade do funcionario: ");
    scanf("%d%*c", &funcionario[i].idade);
    printf(" Digite o nome do funcionario: ");
    scanf("%s%*c", &funcionario[i].nome);
    printf(" Digite o salario do funcionario: ");
    scanf("%f%*c", &funcionario[i].salario);
    printf(" \n ------------------------------------------------------------------------\n");
}
 
for(i=0; i<5; i++) {
    printf(" \n Aidade do funcionario e: %d ", funcionario[i].idade);
    printf(" \n O nome do funcionario é: %s ", funcionario[i].nome);
    printf(" \n o salario do funcionario é: %.2f ", funcionario[i].salario);
    printf(" \n ------------------------------------------------------------------------");
}
 
printf(" \n ");
 
printf(" \n Digite um nome: ");
scanf("%s%", nome);
 
for(i=0; i<5; i++) {
    if(strcmp(nome, funcionario[i].nome)== 0) {
        printf("\n Registro encontrado! ");
        posicao = i;
    } else {
        posicao = -1;
    }
}
 
if(posicao = -1) {
    printf(" \n Registro não encontrado! ");
} else {
    printf(" \n Nome Encontrado");
    printf(" \n Nome é: %s", nome);
    printf(" \n A idade do funcionario e: %d ", funcionario[posicao].idade);
    printf(" \n O nome do funcionario e: %s ", funcionario[posicao].nome);
    printf(" \n O salario do funcionario e: %.2f ", funcionario[posicao].salario);
    printf(" \n ------------------------------------------------------------------------");
}
 

}
  
return 0;
 
}