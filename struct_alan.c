#include <stdio.h>
#include <string.h>

typedef struct pessoas pessoas;
struct pessoas
{
	char nome[50];
	char nascimento[30];
	char endereco[30];
	char email[50];
	char pai[50];

	int cpf, telefone;

};

void BubbleSort(pessoas vetor[], int tamanho)
{ 
  int i, j; 
  pessoas aux;

  for(j=tamanho-1; j>=1; j--)
  { 
    for(i=0; i<j; i++)
    { 
      if(strcmp(vetor[j].nome, vetor[i].nome) < 0)
      { 
        aux=vetor[i]; 
        vetor[i]=vetor[j]; 
        vetor[j]=aux; 
      } 
    } 
  }
  for(i=0; i<10; i++)
  {
  	printf("%s\n", vetor[i].nome);
  }

}

int main()
{

	pessoas features[10];

	


	for(int i = 0; i<10;i++)
	{
		fgets(features[i].nome, 50, stdin);
//		fgets(ficha_pessoas.nascimento, 40, stdin);
//		fgets(ficha_pessoas.endereco, 40, stdin);
//		fgets(ficha_pessoas.email, 40, stdin);
//		fgets(ficha_pessoas.pai, 40, stdin);
		
	}

	BubbleSort(features, 10);
	


}