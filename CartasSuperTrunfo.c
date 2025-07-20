#include <stdio.h>

int main(){

    char estado;
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos;
    int densidadePopulacional;
    float PIB_percapita;

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    int densidadePopulacional2;
    float PIB_percapita2;

    printf("=============================== \n");
    printf("Declarando a primeira carta: \n");
    printf("=============================== \n");
    
    printf("\nEscolha um estado de A ate H: ");
    scanf(" %c", &estado);
    printf("Qual o codigo da carta de 01 ate 04: ");
    scanf("%s", codigo);
    printf("Qual o nome da cidade? ");
    scanf(" %20[^\n]", cidade);
    getchar();
    printf("Qual a quantidade da população? ");
    scanf("%d", &populacao);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area);
    printf("Qual o valor do PIB? ");
    scanf(" %f", &pib);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos);
    densidadePopulacional = populacao / area;
    PIB_percapita = pib / populacao;

    printf("\nCarta 1 \n"); 
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Areá: %.2f KM²\n", area);
    printf("PIB: %.f bilhões de reais \n", pib);
    printf("Numeros de pontos turisticos %i \n", pontos);
    printf("Densidade populacional: %d hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: R$%.2f\n", PIB_percapita);

    printf("\n=============================== \n");
    printf("Declarando a Segunda carta: \n");
    printf("=============================== \n");
    
    printf("\nEscolha um estado de A ate H: ");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta de 01 ate 04: ");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? ");
    scanf(" %20[^\n]", cidade2);
    getchar();
    printf("Qual a quantidade da população? ");
    scanf("%d", &populacao2);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area2);
    printf("Qual o valor do PIB? ");
    scanf(" %f", &pib2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos2);
    densidadePopulacional2 = populacao2 / area2;
    PIB_percapita2 = pib2 / populacao2;

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Areá: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Numeros de pontos turisticos %i\n", pontos2);
    printf("Densidade populacional: %d hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$%.2f\n", PIB_percapita2);


    return 0;

}