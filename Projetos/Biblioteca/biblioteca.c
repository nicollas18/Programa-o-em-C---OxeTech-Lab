#include <stdio.h>
#include <string.h>

typedef struct Livro {
  int id;             // Código do Livro
  char titulo[100];
  char autor[100];
  int status;         // 0 = disponível e 1 = indisponível
} Livro;

void adicionarLivro(Livro livros[], int *total);
void listaLivros(Livro livros[], int *total);
void buscarLivro(Livro livros[], int *total);
void emprestarLivro(Livro livros[], int *total);
void devolverLivro(Livro livros[], int *total);
void salvarLivros(Livro livros[], int *total);
void carregarLivros(Livro livros[], int *total);


int main() {
  Livro livros[100];
  int totalLivros = 0;

  carregarLivros(livros, &totalLivros);
  
  int opcao;

  do {
    printf("Escolha um opção:\n");
    printf("1 - Adicioanr Livros\n");
    printf("2 - Listaar Livros\n");
    printf("3 - Buscar Livros\n");
    printf("4 - Emprestar Livro\n");
    printf("5 - Devolver Livro\n");
    printf("6 - Salvar Dados\n");
    printf("7 - Sair\n");
    
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      adicionarLivro(livros, &totalLivros);
      break;
    case 2:
      listaLivros(livros, &totalLivros);
      break;
    case 3:
      buscarLivro(livros, &totalLivros);
      break;
    case 4:
      emprestarLivro(livros, &totalLivros);
      break;
    case 5:
      devolverLivro(livros, &totalLivros);
      break;
    case 6:
      salvarLivros(livros, &totalLivros);
      break;
    case 7:
      printf("Saindo...\n");
    default:
    printf("Opção Inválida.\n");
      break;
    }

  } while (opcao != 7);

  return 0;

}

void carregarLivros(Livro livros[], int *total) {
  FILE *file = fopen("livros.txt", "r");

  if (file == NULL) {
    printf("Error ao abrir o arquivo.\n");
    return;
  }

  while (fscanf(file, "%d ", &livros[*total].id) != EOF) {
    fgets(livros[*total].titulo, 100, file);
    livros[*total].titulo[strcspn(livros[*total].titulo, "\n")] = '\0';
    fgets(livros[*total].autor, 100, file);
    livros[*total].autor[strcspn(livros[*total].autor, "\n")] = '\0';
    fscanf(file, "%d", &livros[*total].status);
    *total += 1; 
  }

  fclose(file);
}

void listaLivros(Livro livros[], int *total) {
  if (*total == 0) {
    printf("Nenhum livro cadastrado.\n");
    return;
  }

  for (int i = 0; i < *total; i++) {
    printf("ID: %d\n", livros[i].id);
    printf("Título: %s\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Status: %d\n", livros[i].status);
    printf("\n");
  }
}

void adicionarLivro(Livro livros[], int *total) {
  Livro novoLivro;
  printf("\nDigite o ID do livro: ");
  scanf("%d", &novoLivro.id);
  printf("Digite o títuulo do livro: ");
  getchar(); // Para limpar o buffer
  fgets(novoLivro.titulo, 100, stdin);
  novoLivro.titulo[strcspn(novoLivro.titulo, "\n")] = '\0';
  printf("Digite o autor do livro: ");
  fgets(novoLivro.autor, 100, stdin);
  novoLivro.autor[strcspn(novoLivro.autor, "\n")] = '\0';
  novoLivro.status = 0;

  livros[(*total)++] = novoLivro;
  //*total += 1;
  printf("Livro adicionado com sucesso!\n\n");
}

void salvarLivros(Livro livros[], int *total) {
  FILE *file = fopen("livros.txt", "w");

  if (file == NULL) {
    printf("ERROR\n");
    return;
  }

  for (int i = 0; i < *total; i++) {
    fprintf(file, "%d\n%s\n%s\n%d\n", livros[i].id, livros[i].titulo, livros[i].autor, livros[i].status);
  }

  fclose(file);
  printf("Dados Salvor com sucesso!\n");
}

void buscarLivro(Livro livros[], int *total) {
  char titulo[100];
  printf("Digite o título do livro: ");
  getchar();
  fgets(titulo, 100, stdin);
  titulo[strcspn(titulo, "\n")] = '\0';

  for (int i = 0; i < *total; i++) {
    if (strcmp(livros[i].titulo, titulo) == 0) {
      printf("\nLivro encontrado:\n");
      printf("ID: %d\n", livros[i].id);
      printf("Título: %s\n", livros[i].titulo);
      printf("Autor: %s\n", livros[i].autor);
      printf("Status: %d\n", livros[i].status);
      printf("\n");
      return;
    }
  }

  printf("\nLivro não encontrado.\n");
}

void emprestarLivro(Livro livros[], int *total) {
  char titulo[100];
  printf("Digite o título do livro: ");
  getchar();
  fgets(titulo, 100, stdin);
  titulo[strcspn(titulo, "\n")] = '\0';

  for (int i = 0; i < *total; i++) {
    if ((strcmp(livros[i].titulo, titulo) == 0) && livros[i].status == 0) {
      livros[i].status = 1;
      printf("Livro emprestado com sucesso!\n");
      return;
    }
  }

  printf("Livro não encontrado ou não disponível.\n");
}
void devolverLivro(Livro livros[], int *total) {
  char titulo[100];
  printf("Digite o título do livro: ");
  getchar();
  fgets(titulo, 100, stdin);
  titulo[strcspn(titulo, "\n")] = '\0';

  for (int i = 0; i < *total; i++) {
    if ((strcmp(livros[i].titulo, titulo) == 0) && livros[i].status == 1) {
      livros[i].status = 0;
      printf("Livro devoldio com sucesso!\n");
      return;
    }
  }

  printf("Livro não encontrado ou já disponível.\n");
}