#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define RUN 1

typedef struct
{
	char nome[50];
	char Turma[50];
}Alunos;
Alunos aluno[10];

void cadastrar_aluno()
{
	int i, nome;
	FILE *cadastro;
	cadastro = fopen("cadastro_alunos.txt", "w");
	getchar();
	for(i=0;i<3;i++)
	{
		fgets(aluno[i].nome, 50, stdin);
		fgets(aluno[i].Turma, 50, stdin);
		fprintf(cadastro, "Nome: %s", aluno[i].nome);
		fprintf(cadastro, "Turma: %s", aluno[i].Turma);
	}
	fclose(cadastro);
}
void excluir_aluno()
{
	printf("cadastro");
}
void editar_aluno()
{
	printf("cadastro");
}
void listar_aluno()
{
	FILE *abrir;
	fopen("cadastro_alunos.txt", "r");
	getchar();
}
void cadastrar_turma()
{
	printf("cadastro");
}
void vincular_aluno()
{
	printf("cadastro");
}
void excluir_aluno_turma()
{
	printf("cadastro");
}
void view_turma_aluno()
{
	printf("cadastro");
}
void view_aluno_turma()
{
	printf("cadastro");
}


int main()
{
	int menu;

	printf("Digite:\n");
	printf("1-Cadastrar Aluno\n");
	printf("2-Exluir Aluno\n");
	printf("3-Editar Aluno\n");
	printf("6-Listar Aluno\n");
	printf("7-Cadastrar Turma\n");
	printf("8-Ver Turma do Aluno\n");
	printf("9-Ver Aluno da Turma\n");

	scanf("%d", &menu);


	while(RUN)
	{
		if(menu == 1)
		{
			cadastrar_aluno();
			break;
		}
		else if(menu == 2)
		{
			excluir_aluno();
		}
		else if(menu == 3)
		{
			editar_aluno();
		}
		else if(menu == 4)
		{
			listar_aluno();
			break;
		}
		else if(menu == 5)
		{
			cadastrar_turma();
		}
		else if(menu == 6)
		{
			vincular_aluno();
		}
		else if(menu == 7)
		{
			excluir_aluno_turma();
		}
		else if(menu == 8)
		{
			view_turma_aluno();
		}
		else if(menu == 9)
		{
			view_aluno_turma();
		}
	}

	return 0;
}
