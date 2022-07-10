# Lista de Atividades 03 
<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## _Anunciado das atividades_ 
* Arquivo .pdf com enunciado das 5 atividades.
## _Atividades Resolvidas_
* 5 Arquivos .cpp contendo os exercícios.

## _Exercicio 1_
_Implementar um programa que receba uma cadeia de caracteres (string)
e cheque se a mesma é palíndrome, ou seja, se ela é igualmente escrita lendo-se
da esquerda para a direita quanto da direita para a esquerda._
```shell
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include<stdio.h>   
#include<stdlib.h>  
#include<iostream>
#include<locale.h>  

int main() {
 setlocale(LC_ALL, "");
 int i, valor = 0;
 char palavra[15], inversa[15];
 printf("----------------------------\n\n"); 
 printf(" Ola ! Este é o Exercicio 1 \n\n"); 
 printf("----------------------------\n\n"); 
 system("pause");
 system("cls");
 printf("-------------------------\n\n");
 printf(" Digite uma palavra \n\n");
 printf("-------------------------\n\n");
 gets(palavra);
 system("cls");

 
 for(i = 0; palavra[i]; i++){
   palavra[i] = tolower(palavra[i]);
 }

 
 strcpy(inversa, palavra);

 
 strrev(inversa);

 valor = strcmp(palavra, inversa);

 if (valor == 0)
   {
   printf("--------------------------------\n\n");
   printf(" A palavra %s é palíndroma\n", palavra);
   }
 else
   {
   printf("--------------------------------\n\n");
   printf(" A palavra %s não é palíndroma \n\n", palavra);
   }

 return 0;
}
```
## _Exercicio 2_
_O usuário deverá entrar com um valor inteiro que será a dimensão de uma
matriz quadrada 𝐴. Os valores deverão ser inseridos de forma automática
utilizando a função rand() no intervalo de 0 a 100. O programa deverá
apresentar a soma dos valores da diagonal principal, da diagonal inversa, dos
valores acima da diagonal principal, dos valores abaixo da diagonal principal,
dos valores acima da diagonal inversa e dos valores abaixo da diagonal inversa._
```shell
#include<locale.h>
#include<iostream>
#include<time.h>
#include<cstdlib>>		

int main() {

setlocale(LC_ALL, "Portuguese");

int vald, Dp, Ds, ADp, AbDp, ADs, AbDs;
ADp = 0;
ADs = 0;
AbDp = 0;
AbDs = 0;
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 2 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("------ < Digite a dimensão da matriz quadrada > ------\n\n");
scanf("%d",&vald);
system("cls");
int Matriz[vald] [vald];

srand(time(NULL));

for (int i=0; i<vald; i++)
    {
         for (int j=0; j<vald; j++) 
         {
	         Matriz[i][j] = rand()%101;
	     }
    }	
    
printf("----- Sua Matriz Gerada Ficou desta forma --------\n\n"); 

for (int i=0; i<vald; i++) 
     {
         for (int j=0; j<vald; j++) 
		{
         	printf("\t");
         	printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }
    
printf("\n\n");

for (int i=0; i<vald; i++)
    {
         for (int j=0; j<vald; j++) 
		 {
	          if (i == j) 
		       	Dp += Matriz[i][j]; 
	          if ((i + j) == (vald - 1)) 
		     	Ds += Matriz[i][j];
	          if (i<j)
	     		ADp += Matriz[i][j];
	          if ((i+j)<= vald-2)
		     	ADs += Matriz[i][j];
	          if (i>j)
		     	AbDp += Matriz[i][j];
	          if ((i+j) >= (vald))
		     	AbDs += Matriz[i][j];   
     	}
    }
	
Ds = Ds-1 ;
printf("--------------- Operações aditivas ---------------\n\n"); 
printf(" Soma da diagonal Diagonal Principal: %d \n\n", Dp);
printf(" Soma da diagonal Diagonal Secundaria: %d \n\n", Ds);
printf(" Soma dos números Acima da Diagonal Principal:  %d \n\n",  ADp);
printf(" Soma dos números Acima da Diagonal Secundaria: %d \n\n",  ADs);
printf(" Soma dos números Abaixo da Diagonal Principal: %d \n\n",  AbDp);
printf(" Soma dos números Abaixo da Diagonal Secundaria: %d \n\n", AbDs);
system("pause");
system("cls");
} 

```
## _Exercicio 3_
_O usuário deverá com 4 valores inteiros 𝑚, 𝑛, 𝑝, 𝑞 que representação as
dimensões das matrizes 𝐴𝑚𝑥𝑛 e 𝐵𝑝𝑥𝑞. O programa deverá preencher os valores
para as matrizes 𝐴 e 𝐵 de forma automática utilizando a função rand() com
intervalo de 0 a 10. Construa a multiplicação, se possível, entre as matrizes 𝐴 e
𝐵 e construa e apresente a matriz resultante 𝐶._
```shell
#include<stdio.h>   
#include<stdlib.h> 
#include<iostream>
#include<locale.h>  
#include<time.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int m,n,p,q,i,j,k,l,g,h,a,b,c,X;
printf("----------------------------\n\n"); 
printf(" Ola ! Este é o Exercicio 3 \n\n"); 
printf("----------------------------\n\n"); 
system("pause");
system("cls");
printf("--------------------------------------------------\n\n"); 
printf(" Insira a quantidade de linhas da matriz A \n\n");
printf("--------------------------------------------------\n\n");
scanf("%d",&m); 
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de Colunas da matriz A \n\n");
printf("--------------------------------------------------\n\n");
scanf("%d",&n);
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de linhas da matriz B \n\n");
printf("--------------------------------------------------\n\n"); 
scanf("%d",&p);
system("cls");
printf("--------------------------------------------------\n\n");
printf(" Insira a quantidade de Colunas da matriz B \n\n");
printf("--------------------------------------------------\n\n"); 
scanf("%d",&q);
system("cls");

int matrizA[m][n];
int  matrizB[p][q];
float matrizC[n][p],Aux=0;
srand(time(NULL));
printf("-------------------------Matriz A ---------------------------\n\n");
printf(" Inicializando a matriz A com valor 0 em todas suas posições.\n\n");

for(i=0;i<m;i++){ //acessado as linhas da matriz
for(j=0;j<n;j++){ //acessando as colunas da matriz
	matrizA[i][j] = 0; //jogando 0 para todos os valores
	printf("%d \t",matrizA[i][j]);
}
printf("\n");
}
printf("\n\n");
printf("--------------------------------------------------------------\n\n");
printf("\n\n");
system("pause");
system("cls");

printf("-------------------------Matriz B ---------------------------\n\n");
printf(" Inicializando a matriz B com valor 0 em todas suas posições.\n\n");
for(k=0;k<p;k++){ //acessado as linhas da matriz
for(l=0;l<q;l++){ //acessando as colunas da matriz
	matrizB[k][l] = 0; //jogando 0 para todos os valores
	printf("%d \t",matrizB[k][l]);
}
printf("\n");
}
printf("\n\n");
printf("--------------------------------------------------------------\n\n");
printf("\n\n");
system("pause");
system("cls");

printf("-----------------------------------------------\n\n");
printf(" Entrando os valores por linha da matriz A \n\n");
printf("-----------------------------------------------\n\n");
system("pause");
system("cls");
for(i=0;i<m;i++){ //acessado as linhas da matriz
	for(j=0;j<n;j++){ //acessando as colunas da matriz
		//printf("\nDigite o elemento %d-%d da matriz A: ",i+1,j+1);
		c = rand() % 11;                                            
		printf("-------------- Matriz A -----------------------\n\n");
		printf(" Numero aleatorio da matriz A %d-%d é %d  \n\n",i+1,j+1,c);
		matrizA[i][j] = c;
		//scanf("%d",&matrizA[i][j]); //entrando com os valores
		for(g=0;g<m;g++){ //acessado as linhas da matriz, necessário outra variável para percorrer as linhas
			for(h=0;h<n;h++){ //acessando as colunas da matriz, necessário outra variável para percorrer as colunas
				printf("%d \t",matrizA[g][h]); //imprimindo o estado ATUAL da matriz a cada novo elemento inserido
			}
			printf("\n\n");
		}
		printf("\n\n");
		printf("-----------------------------------------------\n\n");
		system("pause");
		system("cls");
	}
}



printf("-----------------------------------------------\n\n");
printf(" Entrando os valores por linha da matriz B \n\n");
printf("-----------------------------------------------\n\n");
system("pause");
system("cls");
for(k=0;k<p;k++){ 
	for(l=0;l<q;l++){ 
		c = rand() % 11;
		printf("-------------- Matriz B -----------------------\n\n");
		printf(" Numero aleatorio da matriz B %d-%d é %d  \n\n",k+1,l+1,c);
		matrizB[k][l] = c;
		for(a=0;a<p;a++){ 
			for(b=0;b<q;b++){ 
				printf("%d \t",matrizB[a][b]); 
			}
			printf("\n\n");
		}
		printf("\n\n");
		printf("-----------------------------------------------\n\n");
		system("pause");
		system("cls");
	}
}



if(m==q)
{

 

for(i=0; i<m; i++)
{
	 for(j=0; j<q; j++)
	 {
			  matrizC[i][j]=0;
			  for(X=0; X<p; X++)
			  {
			  Aux += matrizA[i][X] * matrizB[X][j];
			  }
			  matrizC[i][j]=Aux;
			  Aux=0;
			  }
			  }
			  printf("\n\n");
printf("--------------- Matriz C Gerada pela multiplicação das matrizes A e B---------------\n\n");
for(i=0; i<m; i++)
{
	 for(j=0; j<q; j++)
	 {
	 printf("%6.f", matrizC[i][j]);
	 }
	 printf("\n\n");
	 }
	 printf("\n\n");
printf("------------------------------------------------------------------------------------\n\n");
}
else
{
printf("-------------------------------------------\n\n");
printf(" Nao ha com multiplicar as matrizes dadas  \n\n");
printf("-------------------------------------------\n\n");
}

system("pause");
system("cls");






}
```
## _Exercicio 4_
_Em criptografia, a *Cifra de César*, também conhecida como *cifra de
troca*, *código de César* ou *troca de César*, é uma das mais simples e
conhecidas técnicas de criptografia. É um tipo de cifra de substituição na qual
cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo
dela um número fixo de vezes. Por exemplo, com uma troca de três posições, 𝐴
seria substituído por 𝐷, 𝐵 seria substituído por 𝐸, e assim por diante. O nome
do método é em homenagem a Júlio César que o usou para se comunicar com
os seus generais._

_A transformação pode ser representada alinhando-se dois alfabetos; o
alfabeto cifrado é o alfabeto normal rotacionado à direita ou esquerda por um
número de posições. Por exemplo, aqui está uma cifra de César usando uma
rotação à esquerda de três posições:_

- _Normal:_ _ABCDEFGHIJKLMNOPQRSTUVWXYZ_
- _Cifrado:_ _DEFGHIJKLMNOPQRSTUVWXYZABC_

_Para criptografar uma mensagem, deve-se simplesmente observar cada
letra da mensagem na linha “Normal” e escrever a letra correspondente na linha
“Cifrado”. Para descriptografar, deve-se fazer o contrário._

- _Normal: a ligeira raposa marrom saltou sobre o cachorro cansado_
- _Cifrado: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R
FDFKRUUR FDQVDGR_

_A partir deste breve enunciado explicando sobre o funcionamento do
método de encriptação de César, implementar o mesmo. O programa deve tanto
codificar quanto decodificar. Sendo assim, deve abrir um menu com 2 opções:_

- _Codificação de César:_
- _Decodificação de César;_

_Para quaisquer opções escolhidas, deve ser solicitado ao usuário que insira uma
Chave, que represente quantas posições o alfabeto irá rotacionar, e o lado da
rotação, que deverá ser esquerda ou direita (E ou D). Em seguida deve ser
inserida uma frase que para caso a primeira opção seja escolhida, a frase
resultante deverá estar encriptada e ilustrada na tela; para caso seja escolhida a
segunda opção, a frase resultante deverá estar decriptada e ilustrada na tela._

```shell
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#ifdef WIN32
  #include <conio.h>
  
#else
  #define getch(a) getchar(a); fflush(stdin)
#endif


void limpar()
{
    system ("clear || cls");
}


char cifrar(char *texto, int chave)
{
    int tam=strlen(texto); /*Pega o tamanho do texto passado*/
    int i=0,x=0,cont=0; /*Variaveis auxiliares*/
    char letra;


    /*Zerando variaveis para reutilizar....*/
    cont=0;
    x=0;
    i=0;
    
    /*Loop para verificar se uma letra do alfabeto existe no texto. A cada ocorrencia, substitui essa letra
    de acordo com o deslocamento passado por parametro.*/
    for (letra='a'; letra<='z'; letra++)
        {
            while(i<=tam)
                {
                    if(texto[i] == letra)
                        {
                            texto[i]=letra+chave;
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else if(texto[i] == ' ')
                        {
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else if(texto[i] == toupper(letra))
                        {
                            texto[i]=toupper(letra+chave);
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else
                        {
                            letra++;
                        }
                    if(cont == tam)
                        break;
                }
        }
    limpar();
    return printf("\n\n\t\tCodigo Gerado: %s\n",texto);
}


char decifrar(char *codigo,int chave)
{
    int tam=strlen(codigo); /*Pega o tamanho do texto passado*/
    int i=0,x=0,cont=0; /*Variaveis auxiliares*/
    char alfa[52],letra; /*vetor com alfabeto*/
    limpar();
    printf("\n\t\t Decifrando o codigo %s.......\n",codigo);
    for (letra='a'; letra<='z'; letra++)
        {
            while(i<=tam)
                {
                    if(codigo[i] == letra)
                        {
                            codigo[i]=letra-chave;
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else if(codigo[i] == ' ')
                        {
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else if(codigo[i] == toupper(letra))
                        {
                            codigo[i]=toupper(letra-chave);
                            i++;
                            cont ++;
                            letra='a';
                        }
                    else
                        {
                            letra++;
                        }
                    if(cont == tam)
                        break;
                }
        }
    return printf("\n\n\t\t Mensagem Decifrada: %s \n",codigo);
}


int main()
{
    int op=3,chave=2,i,confirma=0;
    char *mensagem,*cifrado;
    mensagem = (char *)malloc(100);
    cifrado = (char *)malloc(100);
    /*Exibe o menu para escolher criptografar ou nao...*/
    while (op!=0)
        {
            printf ("---- Sistema de Criptografia - CifraCesar ----\n");
            printf ("\t\t Escolha uma Opcao: \n");
            printf ("1-)Criptografar Texto |\n 2-)Decifrar Codigo |\n 0-)Sair |\n");
            scanf ("%d",&op);
            if(op == 1)
                {
                    printf("Chave de Deslocamento: ");
                    scanf ("%d",&chave);


                    printf ("Mensagem: \n");
                    fflush(stdin);
                    gets(mensagem);
                    printf("A mensagem tem o tamanho de %d caracteres: \n %s",strlen(mensagem),mensagem);
                    getch();


                    cifrar(mensagem,chave);
                    cifrado=mensagem;
                    confirma=1;
                    getch();
                    limpar();
                }
            else if(op == 2)
                {
                    if(confirma != 1)
                        {
                            printf("Chave de Deslocamento: ");
                            scanf ("%d",&chave);


                            printf ("Codigo: \n");
                            fflush(stdin);
                            gets(cifrado);
                            decifrar(cifrado,chave);
                            getch();
                            limpar();
                        }
                    else
                        {
                            printf("Valor do codigo: %s",cifrado);
                            getch();
                            decifrar(cifrado,chave);
                            getch();
                            limpar();
                            op=0;
                        }
                }
            else if (op == 0)
                {
                    break;
                    free (mensagem);
                    free (cifrado);
                }




        }
}
```

## _Exercicio 5_

_Construir um programa que realize o cadastro de 5 pessoas com nome,
idade e salário, utilizando a estrutura registro (struct). Após a inserção dos dados
construir um menu com as seguintes funcionalidades:_
1. _Busca de cadastro por nome;_
2. _Mostrar os nomes de usuários entre idades informadas;_
3. _Apresentar os usuários maiores que um salário informado;_
4. _Sair._
_A opção 1 solicita que se escreva um nome, e que que o programa apresentes
todos os dados de todos os cadastros que tenham aquele nome. A opção 2
solicita a entrada de duas idades, uma menor e uma maior, e então o programa
deve apresentar todos os dados de todos os cadastros que possuírem a idade
entre as idades informadas. A opção 3 realiza o mesmo que a opção 2 mas com
o salário. A opção 4 termina o programa._

```shell
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
```
