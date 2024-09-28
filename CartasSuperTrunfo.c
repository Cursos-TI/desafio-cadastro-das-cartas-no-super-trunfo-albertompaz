#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char nome[50];
    int populacao, numPontosTuristicos;
    float area, pib;

    printf("---- Comecando a cadastrar a carta ---\n");

    printf("Informe o nome da Cidade: \n");
    scanf("%s", nome);

    printf("Informe a populacao da Cidade: \n");
    scanf("%d", &populacao);

    printf("Informe o numero de pontos turisticos da Cidade: \n");
    scanf("%d", &numPontosTuristicos);

    printf("Informe a area da Cidade: \n");
    scanf("%f", &area);

    printf("Informe o PIB da Cidade: \n");
    scanf("%f", &pib);

    printf("---- cadastro concluido ---");

    printf("\n\n---- Dados da Cidade ----\n");
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numPontosTuristicos);

    return 0;
}
