#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Definindo uma estrutura para armazenar os dados do cliente
struct Cliente{
char nome[100];
int idade;
char endereco[150];
char cidade[50];
char estado[50];
char fone[15];
};

int main(void) {
  struct Cliente cliente;
 FILE *arquivo;
  
printf("+++++Cadastro de clientes inteligentes++++++");
  
  //Solicitando o nome do cliente
  printf("Digite o nome do cliente:\n ");
  fgets(cliente.nome,100,stdin);
  cliente.nome[strcspn(cliente.nome,"\n")]='\0';
  
  //Solicitando a idade do cliente
  printf("Digite a idade do cliente: ");
  scanf("%d",&cliente.idade);
  getchar(); //Limpando o valor de memoria do scanf

  //Solicitando o endereço do cliente
  printf("Digite o endereço do cliente: ");
  fgets(cliente.endereco,150,stdin);
  cliente.endereco[strcspn(cliente.endereco,"\n")]='\0';

  //Salvando os dados no arquivo
  arquivo = fopen("clientes.txt","a");
  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  //Gravando os dados no arquivo
  fprintf(arquivo,"Nome: %s\n,idade: %d\n,Endereço: %s\n", cliente.nome,cliente.idade,cliente.endereco);
  fclose(arquivo);
  printf("Dados do cliente salvos.\n");
  
  //Solicitando a cidade do cliente
  //printf("Digite o cidade do cliente:\n ");
  // fgets(cliente.cidade,50,stdin);
  // cliente.cidade[strcspn(cliente.cidade,"\n")]='\0';


  //Solicitando o estado do cliente
  // printf("Digite o estado do cliente:\n ");
  // fgets(cliente.estado,50,stdin);
  // cliente.estado[strcspn(cliente.estado,"\n")]='\0';

  // //Solicitando o telefone do cliente
  // printf("Digite o fone do cliente:\n ");
  // fgets(cliente.fone,15,stdin);
  // cliente.fone[strcspn(cliente.fone,"\n")]='\0';

  //Exibindo os dados digitados
  printf("----Exibindo os dados digitados");
  printf("Nome: %s\n",cliente.nome);
  printf("Idade: %d\n",cliente.idade);
  printf("Endereço: %s\n",cliente.endereco);
  // printf("Estado: %s\n",cliente.estado);
  // print("Fone: %s\n",cliente.fone);
  return 0;
}