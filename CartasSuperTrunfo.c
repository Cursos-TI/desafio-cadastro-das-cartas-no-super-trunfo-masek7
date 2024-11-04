#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[10];
    char nome_cidade[50];
    char codigo_carta[3];
    int populacao;
    float area;
    float densidade_pop;
    double pib;
    double pib_pc;
    int pt;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite a sigla do ESTADO: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite o código da carta: (LIMITE DE 3 CARÁCTERES) \n");
    scanf("%s", &codigo_carta);

    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite pib: \n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%i", &pt);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    densidade_pop = (populacao/area);
    pib_pc = (pib/ (double)populacao);

    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo_carta);
    printf("Nome cidade: %s \n", nome_cidade);
    printf("População: %i \n", populacao);
    printf("Área: %f km² \n", area);
    printf("Densidade Populacional: %f/km² \n", densidade_pop);
    printf("PIB: %lf bilhões de reais \n", pib);
    printf("PIB per Capita: %lf reais \n", pib_pc);
    printf("Número de Pontos Turísticos: %i", pt);
    return 0;
}
