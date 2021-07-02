#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include "Interface.h"

int main()
{
    using namespace std;

    setlocale(LC_ALL, "Portuguese");
    
    Lista* li = cria_lista(); 
    struct aluno dados_aluno;
    int matricula_aluno, posicao;
    int opcao;
	int aux = 0;
    int i = 1;

    while (i == 1)
    {
		system("cls");
		printf("\n#############################################");
		printf("\n           MENU - Lista de informacao      ");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n-->  1 = Total de Matriculados\n   ");
		printf("\n-->  2 = Adicionar Novo Aluno\n ");
		printf("\n-->  3 = Remover Aluno\n ");
		printf("\n-->  4 = Buscar Aluno\n  ");
		printf("\n-->  5 = Imprimir Lista de Alunos\n ");
		printf("\n-->  6 = Calcular Media da Turma\n ");
		printf("\n");
		printf("\nPressione Outra Tecla Para Sair!\n ");
		printf("\n");
		printf("\n#############################################");
		printf("\n\n\n>> "); cin >> opcao;

		// 1- TOTAL DE ALUNOS NA LISTA, 2- ADICIONAR NOVO ALUNO, 3- REMOVER ALUNO, 4- BUSCAR ALUNO, 5- LISTA DE ALUNOS, 6- MEDIA DA TURMA.
		switch (opcao) {

			case 1:
				cout << "Alunos Matriculados :"<< tamanho_lista(li)<<endl;
				//tamanho_lista(li);
				system("pause");
				break;

			case 2:
				cout << "Digite a Matricula : "; cin >> dados_aluno.matricula;
				cout << "Digite o Nome : "; cin >> dados_aluno.nome;
				insere_aluno_ordenada_matricula(li, dados_aluno);
				system("pause");
				break;

			case 3:
				cout << "Digite a Matricula a ser Removida: "; cin >> matricula_aluno;
				remove_lista(li, matricula_aluno);
				system("pause");
				break;

			case 4:
				cout << "Digite a Matricula a ser Buscada: "; cin >> matricula_aluno;
				consulta_lista_mat(li, matricula_aluno, &dados_aluno);
				system("pause");
				break;

			case 5:
				imprime_lista(li);
				system("pause");
				break;

			case 6:
				aux = tamanho_lista(li);

				float nota1, nota2, somanota, mediaaluno, somaclasse = 0;
				float mediaclasse = 0;
				int i, aprovado = 0, reprovado = 0, exame = 0;

				for (i = 1; i <= aux; i++)
				{
					cout << "\n Digite a Primeira Nota: ";
					cin >> nota1;

					cout << "\n Digite a Segunda Nota: ";
					cin >> nota2;

					somanota = nota1 + nota2;
					mediaaluno = somanota / 2;

					if (mediaaluno >= 7)
					{
						cout << "\n APROVADO!";
						exame++;
					}

					else

					{
						cout << "\n REPROVADO!";
						reprovado++;
					}

					somaclasse = somaclasse + somanota;
				}

				mediaclasse = somaclasse / (aux * 2);
				cout << "\n A Media da Turma e : " << mediaclasse;
				system("pause");
		}
    }
    
}

