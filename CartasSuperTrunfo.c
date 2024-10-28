#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int cod_cidade;
    char nome_cidade[50];
    float pop_cidade;
    float area_cidade;
    float pib_cidade;
    int pt_cidade;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);
    printf("Digite a população da cidade: \n");
    scanf("%f", &pop_cidade);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area_cidade);
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_cidade);
    printf("Digite o número de pontos túristicos da cidade: \n");
    scanf("%d", &pt_cidade);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("O código da cidade é: %d \n", cod_cidade);
    printf("O nome da cidade é: %s \n", nome_cidade);
    printf("A o tamanho da população é: %f \n", pop_cidade);
    printf("A área da cidade é: %f \n", area_cidade);
    printf("O PIB dessa cidade é: %f \n", pib_cidade);
    printf("Ela tem: %d pontos turisticos.", pt_cidade);

    return 0;
}
