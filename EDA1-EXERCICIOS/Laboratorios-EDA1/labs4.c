/*Sistema de Gerenciamento de Estoque - SGE
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar o estoque de uma loja. O sistema SGE (Sistema de Gerenciamento de Estoque) se baseia em dois tipos de dados: TProduto e TEstoque e possui quatro rotinas principais: alocaEstoque (realiza alocação dinâmica de memória), incluirProdutos (lê e armazena os detalhes dos produtos), listarProdutos (lista na tela  todos os produtos em estoque) e desalocaEstoque (realiza a desalocação de memória) conforme detalhado abaixo.

typedef struct {
int id;  //Código do produto
int quantidade;  //Quantitativo do produto em estoque (QMP)
float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
int qtdeProdutos;  //Quantidade máxima de diferentes produtos
TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

O analista de testes da equipe montou um pSistema de Gerenciamento de Estoque - SGE
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar o estoque de uma loja. O sistema SGE (Sistema de Gerenciamento de Estoque) se baseia em dois tipos de dados: TProduto e TEstoque e possui quatro rotinas principais: alocaEstoque (realiza alocação dinâmica de memória), incluirProdutos (lê e armazena os detalhes dos produtos), listarProdutos (lista na tela  todos os produtos em estoque) e desalocaEstoque (realiza a desalocação de memória) conforme detalhado abaixo.

typedef struct {
int id;  //Código do produto
int quantidade;  //Quantitativo do produto em estoque (QMP)
float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
int qtdeProdutos;  //Quantidade máxima de diferentes produtos
TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SGE. Como você pode ver, os testes das funções são realizados com base na variável Estoque.

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);

return 0;
}

Você está encarregado de desenvolver a função listarProdutos conforme abaixo.

void listarProdutos(&Estoque){
SEU CÓDIGO VAI AQUI!
}

Requisitos da função listarProdutos:
R1. Mostrar na tela a os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
R2. Utilize o seguinte formato de saída de dados: printf("ID: %d, Qt:%d, Preço: %.2f\n", pID, pQ, pP), onde pID, pQ e pP são o código, a quantidade e o preço de um produto.  

Em suma, sua tarefa é postar o código da função void listarProdutos(TEstoque *pEstoque) . As outras funções do SGE estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

3
1 5 10.50
2 3 15.75
3 8 20.00

	

ID: 1, Qt:5, Preço: 10.50
ID: 2, Qt:3, Preço: 15.75
ID: 3, Qt:8, Preço: 20.00
Memória liberada com sucesso

7
101 50 12.99
102 25 8.50
103 10 15.75
104 5 22.00
105 20 9.99
106 30 5.75
107 15 17.25

	

ID: 101, Qt:50, Preço: 12.99
ID: 102, Qt:25, Preço: 8.50
ID: 103, Qt:10, Preço: 15.75
ID: 104, Qt:5, Preço: 22.00
ID: 105, Qt:20, Preço: 9.99
ID: 106, Qt:30, Preço: 5.75
ID: 107, Qt:15, Preço: 17.25
Memória liberada com sucesso
rograma (função main() abaixo) para testar todas as funcionalidades do SGE. Como você pode ver, os testes das funções são realizados com base na variável Estoque.

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);

return 0;
}

Você está encarregado de desenvolver a função listarProdutos conforme abaixo.

void desalocaEstoque(&Estoque){
SEU CÓDIGO VAI AQUI!
}

Requisitos da função desalocaEstoque:
R1. Desalocar a memória que foi alocada dinamicamente.
R2. Reconfigurar adequadamente os campos da variável Estoque. Veja que o parâmetro pEstoque é um parâmetro por referência. 

Em suma, sua tarefa é postar o código da função void desalocaEstoque(TEstoque *pEstoque) . As outras funções do SGE estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

3
1 5 10.50
2 3 15.75
3 8 20.00

	

ID: 1, Qt:5, Preço: 10.50
ID: 2, Qt:3, Preço: 15.75
ID: 3, Qt:8, Preço: 20.00
Memória liberada com sucesso

7
101 50 12.99
102 25 8.50
103 10 15.75
104 5 22.00
105 20 9.99
106 30 5.75
107 15 17.25

	

ID: 101, Qt:50, Preço: 12.99
ID: 102, Qt:25, Preço: 8.50
ID: 103, Qt:10, Preço: 15.75
ID: 104, Qt:5, Preço: 22.00
ID: 105, Qt:20, Preço: 9.99
ID: 106, Qt:30, Preço: 5.75
ID: 107, Qt:15, Preço: 17.25
Memória liberada com sucesso
*/

void desalocaEstoque(TEstoque *pEstoque) {
    free(pEstoque->produtos);
    pEstoque->produtos = NULL;
    pEstoque->qtdeProdutos = 0;
}