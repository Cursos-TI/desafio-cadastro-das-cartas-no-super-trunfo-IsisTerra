#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    // Defina variáveis separadas para cada atributo da cidade.

    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    int turismo, turismo2;
    float area, area2;
    double pib, pib2;
    float densPop, densPop2;
    double pibPerCapita, pibPerCapita2;

    printf("***Bem vindo ao Super Trunfo!***\n");

    // Informações da primeira carta:
    printf("Por favor, insira os dados da sua primeira carta como solicitado\n"); // Orientações ao usuário
    printf("Insira a letra, de 'A' a 'H': ");
    scanf(" %c", &estado); // Espaço para que o enter não seja lido como o caractere escolhido
    printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    scanf("%s", &codigo);
    printf("O nome da cidade: ");
    scanf("%s", &cidade);
    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo);

    // Informações da segunda carta:
    printf("Dados salvos. Agora, insira os dados da sua segunda carta\n");
    printf("Insira uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); // Espaço para que o enter não seja lido como o caractere escolhido
    printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    scanf("%s", &codigo2);
    printf("O nome da cidade: ");
    scanf("%s", &cidade2);
    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib2);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo2);

    /*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.*/

    densPop = (float)populacao / area;
    densPop2 = (float)populacao2 / area2;

    /*Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.*/

    pibPerCapita = (double)pib / populacao;
    pibPerCapita2 = (double)pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    /* Exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.*/

    // Impressão de informações das duas cartas:

    // Carta 1:
    printf("\n Carta 1:\n"); // Mais uma linha para separar o conteúdo
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f KM²\n", area);
    printf("PIB: %.3lf Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop);
    printf("PIB Per Capita: %.2lf reais\n", pibPerCapita);

    // Carta 2:
    printf("\n Carta 2:\n"); // Mais uma linha para separar o conteúdo
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f KM²\n", area2);
    printf("PIB: %.3lf Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("PIB Per Capita: %.2lf reais\n", pibPerCapita2);


    return 0;
}
