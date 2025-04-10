#include <stdio.h>

int main()
{

    // Variáveis definidas para cada atributo das duas cartas
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float densPop, densPop2;
    float pibPerCapita, pibPerCapita2;

    printf("***Bem vindo ao Super Trunfo!***\n");

    // Informações da primeira carta:
    printf("Por favor, insira os dados da sua primeira carta como solicitado\n\n"); // Orientações ao usuário
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
    printf("O Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo);

    // Informações da segunda carta:
    printf("Dados salvos. Agora, insira os dados da sua segunda carta\n\n");
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
    printf("O Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo2);

    /*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.*/

    densPop = populacao / area;
    densPop2 = populacao2 / area2;

    /*Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.*/

    pibPerCapita = (pib * 1000000000) / populacao;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Comparando atributo escolhido (População)
    printf("\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade, populacao);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}