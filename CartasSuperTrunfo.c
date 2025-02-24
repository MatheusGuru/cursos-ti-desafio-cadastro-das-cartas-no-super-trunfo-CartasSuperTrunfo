#include <stdio.h>

int main(){
    printf("...Desafio Super Trunfo 1...\n");
    // Declaração das variaveis para as duas cartas
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    char nome1[10], nome2[10]; 
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da carta 1
    printf("Digite os Dados da carta 1:\n");
    printf("Estado\n");
    scanf("%s", estado1);
    printf("codido da cidade\n");
    scanf("%s", codigo1);
    printf("nome da cidade\n");
    scanf("%s", nome1);
    printf("população\n");
    scanf(" %d", &populacao1);
    printf("área\n");
    scanf("%f", &area1);
    printf("PIB\n");
    scanf("%f", &PIB1);
    printf("número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos1);

    //Leitura de dados da carta 2
    printf("Digite os Dados da carta 2:\n");
    printf("Estado\n");
    scanf("%s", estado2);
    printf("codido da cidade\n");
    scanf("%s", codigo2);
    printf("nome da cidade\n");
    scanf("%s", nome2);
    printf("população\n");
    scanf(" %d", &populacao2);
    printf("área\n");
    scanf("%f", &area2);
    printf("PIB\n");
    scanf("%f", &PIB2);
    printf("número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição de dados da carta 1
    printf("...Carta 1...\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo:%s\n", codigo1);
    printf("Nome:%s\n", nome1);
    printf("População:%d\n", populacao1);
    printf("Area:%f\n", area1);
    printf("PIB:%f\n", PIB1);
    printf("Pontos Turisticos:%d\n", pontos_turisticos1);

    // Exibição de dados da carta 2
    printf("...Carta 2...\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo:%s\n", codigo2);
    printf("Nome:%s\n", nome2);
    printf("População:%d\n", populacao2);
    printf("Area:%f\n", area2);
    printf("PIB:%f\n", PIB2);
    printf("Pontos Turisticos:%d\n", pontos_turisticos2);

    return 0;
}