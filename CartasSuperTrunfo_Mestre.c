#include <stdio.h>

int main(){
    // Declaração das variaveis para as duas cartas
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char nome1[11], nome2[11]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2; 
    float PIB_per_capita1, PIB_per_capita2;
    float SuperPoder1, SuperPoder2;

    //Área para entrada de dados carta 1
    printf("Digite os Dados da carta 1:\n");
    printf("Estado:\n");
    scanf("%s", estado1);
    printf("codido da cidade:\n");
    scanf("%s", codigo1);
    printf("nome da cidade:\n");
    scanf("%s", nome1);
    printf("população:\n");
    scanf("%lu", &populacao1);
    printf("área:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &PIB1);
    printf("número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo das propriedades derivadas carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;
    SuperPoder1 = (float)populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + (1.0 / densidade_populacional1);

    //Área para entrada de dados carta 2
    printf("Digite os Dados da carta 2:\n");
    printf("Estado:\n");
    scanf("%s", estado2);
    printf("codido da cidade:\n");
    scanf("%s", codigo2);
    printf("nome da cidade:\n");
    scanf("%s", nome2);
    printf("população:\n");
    scanf("%lu", &populacao2);
    printf("área:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &PIB2);
    printf("número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das propriedades derivadas carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;
    SuperPoder2 = (float)populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1.0 / densidade_populacional2);

    //Área para exibicão dos dados da cidade carta 1
    printf("Estado: %s\n", estado1);
    printf("codigo da cidade: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos1);
    printf("A densidade populacional é: %.2f hab/km\n", densidade_populacional1);
    printf("O PIB per capita é: %.2f\n", PIB_per_capita1);
    printf("SuperPoder: %.2f\n", SuperPoder1);

    //Área para exibicão dos dados da cidade carta 2
    printf("Estado: %s\n", estado2);
    printf("codigo da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %.2f hab/km\n", densidade_populacional2);
    printf("O PIB per capita é: %.2f\n", PIB_per_capita2);
    printf("SuperPoder: %.2f\n", SuperPoder2);


    // Comparações e resultados
    printf("\nComparações:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("PIB per capita: %d\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Densidade populacional (menor é melhor): %d\n", densidade_populacional1 < densidade_populacional2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;

} 
