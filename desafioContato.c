#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    char telefone[20];
    char email[100];
} Contato;

Contato* criar_contato(char *nome, char *telefone, char *email){

    Contato *novo =(Contato*) malloc(sizeof(Contato));
}

 if (novo == NULL){
        printf("Erro ao alocar memória!\n");
        return NULL;
    }


    strcpy(novo->nome, nome);
    strcpy(novo->telefone, telefone);
    strcpy(novo->email, email);
    
    return novo;
}


void exibir_contato)Contato *contato){
    printf("Nome: %s\n", contato->nome);
    printf("Telefone: %s\n", contato->telefone);
    printf("Email: %s\n", contato->email);
}


int buscar_contato(Contato **contatos, int quantidade, char *nome){
    for (int i = 0; i < quantidade; i++){
        if(strcmp(contatos[i]->nome, nome) == 0){
            return i;
        }
    }
    return -1;
}


int validar_email(char *email){
    if(stche(email, '@') != NULL){
        return 1;
    }
    return 0;
}


void listar_todos(Contato **contatos, int quantidade){
    if(quantidade == 0){
        printf("\nNenhum contato cadastrado.\n");
        return;
    }
    printf("\nLista de contatos:\n");

    for(int i = 0; i < quantidade; i++){
        printf("\n%d. %s\n",i + 1, contatos[i]->nome);
        printf("    Telefone: %s\n", contatos[i]->telefone);
        printf("    Email: %s\n", contatos[i]->email);
    }
}


int contar_contatos(Contato **contatos, int quantidade){
    return quantidade;
}


void liberar_memoria(Contato **contatos, int quantidade){
    for(int i = 0; i < quantidade; i++){
        free(contatos[i]);
    }
    free(contatos);
}   



int main(){

    Contato **contatos = NULL;

    int quantidade = 0;

    int opcao;

    char nome[100], telefone[20], email[100]
    printf("Gerenciador de Contatos v1.0\n");

    do{
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("[1] Adicionar contato\n");
        printf("[2] Listar contatos\n");
        printf("[3] Buscar contatos\n");
        printf("[4] Remover contatos\n");
        printf("[5] Sair\n");
        printf("Escolha uma opcão: ");
        scanf("%d", &opcao);


        getchar();

        switch(opcao){

            case 1:
            printf("\nDigite o nome do contato:  ")
            fgerset(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = 0;
            printf("\nDigite o telefone do contato:  ")
            fgerset(telefone, sizeof(telefone), stdin);
            telefone[strcspn(telefone, "\n")] = 0;
            printf("\nDigite o email do contato:  ")
            fgerset(email, sizeof(email), stdin);
            email[strcspn(email, "\n")] = 0;
            if(!validar_email(email))
                printf("Email inválido\n");
                break;
        }

        contatos = realloc(contatos, (quantidade + 1) * sizeof(Contato*));
        if (contatos == NULL){
            printf("Erro de memória!\n");
            return 1;
        }
        contatos[quantidade]= criar_contato(nome, telefone, email);
        quantidade++;
        printf("Contato adicionado com sucessso!\n");
        break;

        case 2:
        listar_todos(contatos, quantidade);
        break;

    case 3: {
        printf("Digite o nome do contato: ");
        fgets(nome, sizeof(nome) stdin);
        nome[strcspn(nome, "\n")] = '\0';
        int indice = buscar_contatos(contatos, quantidade, nome);
        if(indice != -1){
            printf("\nContato encontrado!\n");
            exibir_contato(contatos[indice]);
        }else{
            printf("\nContato não encontrado!\n");
    }
        break;
    }

        case 4:
        printf("Digite o nome do contato: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        int indice = buscar_contato(contatos, quantidade, nome);
        if(indice == -1){
        printf("Contato não encontrado.\n");
        break;
    }
        free(contatos[indice]);

        for(int i = indice, i < quantidade - 1; i++){
        contatos[1] = contatos[i + 1];
    }
        quantidade--;

        contatos = realloc(contatos, quantidade * sizeof(Contato*));
        printf("Contatos removido com sucesso!\n");
        break;
    }

    case 5:
        liberar_memoria(contatos, quantidade);
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");



        }
        }
    }while(opcao !=5);

    return 0;

}





int main(){
    int opcao = -1;

    printf("desafioContato\n");

    while (opcao != 0){
        printf("\n========= MENU PRINCIPAL =========\n");
        printf("1. Entrada e Saída (printf/scanf)\n");
        printf("2. Funções e Modularização do código\n");
        printf("3. Manipulação de strings\n");
        printf("4. Alocação dinâmica de memória\n");
        printf("5. Liberação de memória com free\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                exemplo_print();
                break;
            case 2:
                exemplo_scanf();
                break;
            case 3:
                mostrar_menu();
                demonstrar_funcoes();
                break;
            case 4:
                gerencia_string();
                break;
            case 5:
                exemplo_malloc();
                break;
            case 6:
                gerenciar_lista_nomes();
                break;
            case 0:
                printf("\nAté a próxima aula! Bom estudo!\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }

    return 0;
}