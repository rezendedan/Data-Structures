#define MAX 5

typedef struct {
	int chave;
	char nome[40];
	double salario;
} Pessoa;

typedef struct{
	Pessoa dados[MAX]; // CARGA DE DADOS
	int tam;
}LISTA;

void menu();
int isFull(LISTA *l);
void iniciarLista(LISTA *l);
void inserir(LISTA *l, Pessoa p);
void inserirOrdenado(LISTA *l, Pessoa p );
void remover(LISTA *l, int chave);
void imprimirLista(LISTA *l);
void imprimirDados(Pessoa p);
void imprimirChave(LISTA *l, int chave);
Pessoa lerDados();
int busca(LISTA *l, int chave);