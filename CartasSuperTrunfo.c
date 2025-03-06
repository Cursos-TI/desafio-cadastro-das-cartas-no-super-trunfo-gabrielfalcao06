#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     //variavel npt = número de pontos turísticos
     char estado, estado2, codigo[4], codigo2[4], cidade[25], cidade2[25];
     float area, area2, pib, pib2;
    int populacao, populacao2, npt, npt2;

    printf("=== Vamos Cadastrar Suas Cartas === \n");
    printf("\n === Carta 1: === \n");
    
    //A função printf abre a caixa de entrada para o usuário.
    //A função scanf coleta as informações de cada entrada do usuário.
    //O estado é escolhido através de uma letra de 'A' a 'H'
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    //O código é escohido através da letra do estado seguida de um número de '01' a '04'
    printf("Digite o código (Letra do estado seguida de um número de '01' a '04'): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt);

    //Registro da Carta 2:
    printf("\n === Vamos Registrar a Carta 2 === \n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt2);

    //Exibição das cartas cadastradas através do printf, de forma clara e organizada.
    //Dados das cartas exibidos um por linha.
    //Exibindo dados cadastrados Carta 1:
    printf("\n === Dados Carta 1: === \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("População: %d \n", populacao);
    printf("Número de Pontos Turísticos: %d \n", npt);

    //Exibindo dados cadastrados Carta 2:

    printf("\n === Dados Carta 2: === \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("População: %d \n", populacao2);
    printf("Número de pontos turísticos: %d \n", npt2);

    return 0;
}
