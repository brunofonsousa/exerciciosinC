#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// DIMENSÕES DA JANELA PARA EXIBIÇÃO IDEAL DO PROGRAMA:
//                  Largura = 82
//                  Altura  = 25

struct agenda{
    char nome[50];
    char telefone[20];
    char rua[30];
    int num;
    char complemento[20];
    char bairro[15];
    char cidade[20];
    char estado[3];
    };

void main(){
    setlocale(LC_ALL, "Portuguese");
    struct agenda cadastro[6];
    int i=1, j=1, cont=1, opcao;
    while (opcao != 0){
        printf(" |==============================================================================|\n");
        printf(" |                    A G E N D A    D E    C L I E N T E S                     |\n");
        printf(" |==============================================================================|");
        printf("\n\n\n\n\n\n\n\t\t\t  [ 1 - Inserir novo cadastro ]  \n");
        printf("\t\t\t  [ 2 - Exibir cadastros      ]  \n");
        printf("\t\t\t  [ 0 - Sair                  ]  \n");
        printf("\n\n\n \t\t\t             Opção: ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls");
        if (opcao == 1){
            if (cont < 6){
                printf(" |============================================================================|\n");
                printf(" |++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n");
                printf(" |===================== ---------------------------- =========================|\n");
                printf("\t\t\t  |     Código nº %d   \t|\n", cont);
                printf("\t\t\t  -----------------------\n");
                printf("\n\n\n\n\t\t => NOME ............ : ");
                gets(cadastro[j].nome);
                fflush(stdin);
                printf("\n\t\t => TELEFONE ........ : ");
                gets(cadastro[j].telefone);
                fflush(stdin);
                printf("\n\t\t => RUA ............. : ");
                gets(cadastro[j].rua);
                fflush(stdin);
                printf("\n\t\t => nº .............. : ");
                scanf("%d", &cadastro[j].num);
                fflush(stdin);
                printf("\n\t\t => COMPLEMENTO ..... : ");
                gets(cadastro[j].complemento);
                fflush(stdin);
                printf("\n\t\t => BAIRRO .......... : ");
                gets(cadastro[j].bairro);
                fflush(stdin);
                printf("\n\t\t => CIDADE: ......... : ");
                gets(cadastro[j].cidade);
                fflush(stdin);
                printf("\n\t\t => ESTADO (UF): .... : ");
                gets(cadastro[j].estado);
                fflush(stdin);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t ______________________________________________ \n");
                printf("\t\t|                                              |\n");
                printf("\t\t|       Contato cadastrado com sucesso!!!      |\n");
                printf("\t\t|______________________________________________|\n\n\n\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");
                cont++;
                j++;
            }
            else {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t _____________________________ \n");
                printf("\t\t\t|                             |\n");
                printf("\t\t\t|       Agenda lotada!!!      |\n");
                printf("\t\t\t|_____________________________|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");
            }
        }
        else if (opcao == 2) {
            if (cont == 1) {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t _____________________________ \n");
                printf("\t\t\t|                             |\n");
                printf("\t\t\t|       Agenda vazia!!!       |\n");
                printf("\t\t\t|_____________________________|\n\n\n\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");
            }
            else {
                for (i=1;i<cont;i++){
                    printf("\n\n\n");
                    printf(" -------------------------------------------------------------------------------\n");
                    printf("|\t\t\t CADASTRO DE CLIENTES - Cód. %d \t\t\t\t|\n", i);
                    printf(" -------------------------------------------------------------------------------\n");
                    printf("\n\t\t|++++++++++++ NOME : %s ", cadastro[i].nome);
                    printf("\n\t\t|++++++++ TELEFONE : %s ", cadastro[i].telefone);
                    printf("\n\t\t|+++++++++++++ RUA : %s, ", cadastro[i].rua);
                    printf(" nº %d ", cadastro[i].num);
                    printf("\n\t\t|+++++ COMPLEMENTO : %s ", cadastro[i].complemento);
                    printf("\n\t\t|++++++++++ BAIRRO : %s ", cadastro[i].bairro);
                    printf("\n\t\t|++++++++++ CIDADE : %s ", cadastro[i].cidade);
                    printf("\n\t\t|+++++ ESTADO (UF) : %s ", cadastro[i].estado);
                    fflush(stdin);
                    }
                printf("\n\n\n\n");
                system("pause");
                system("cls");
            }
        }
        else if (opcao == 0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t ____________________________ \n");
            printf("\t\t\t|                            |\n");
            printf("\t\t\t|     Consulta encerrada!    |\n");
            printf("\t\t\t|____________________________|\n\n\n\n\n\n\n\n\n\n");
            break;
            system("cls");
        }
        else {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t _____________________________ \n");
            printf("\t\t\t|                             |\n");
            printf("\t\t\t|    Erro: Opcão inválida!    |\n");
            printf("\t\t\t|_____________________________|\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            }
        }
}

