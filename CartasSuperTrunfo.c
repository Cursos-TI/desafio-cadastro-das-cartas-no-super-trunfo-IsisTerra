#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    // Defina variáveis separadas para cada atributo da cidade.
    // A população agora deve ser armazenada como unsigned long int para acomodar números maiores.

    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    int turismo, turismo2;
    float area, area2;
    float pib, pib2;
    float densPop, densPop2;
    float pibPerCapita, pibPerCapita2;
    float superPoder, superPoder2;

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
    scanf("%lu", &populacao);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf("%f", &pib);
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
    scanf("%lu", &populacao2);
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

    /*Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")*/

    superPoder = (float)populacao + area + (pib * 1000000000) + (float)turismo + pibPerCapita - densPop;
    superPoder2 = (float)(populacao2 + area2 + (pib2 * 1000000000) + (float)turismo2 + pibPerCapita2 - densPop2);

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
    printf("População: %lu\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);

    // Carta 2:
    printf("\n Carta 2:\n"); // Mais uma linha para separar o conteúdo
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    /*Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence)*/

    printf("*** Hora do Duelo de cartas ***\n");
    printf("Obs.: 0 para carta 2 vencedora e 1 para carta 1 vencedora\n");

    printf("População: Carta vencedora (%d) \n", (populacao > populacao2));
    printf("Área: Carta vencedora (%d) \n", (area > area2));
    printf("PIB: Carta vencedora (%d) \n", (pib > pib2));
    printf("Pontos Turísticos: Carta vencedora (%d) \n", (turismo > turismo2));
    printf("Densidade Populacional: Carta vencedora (%d) \n", (densPop < densPop2));
    printf("PIB Per Capita: Carta vencedora (%d) \n", (pibPerCapita > pibPerCapita2));
    printf("Super Poder: Carta vencedora (%d) \n", (superPoder > superPoder2));

    return 0;
}
