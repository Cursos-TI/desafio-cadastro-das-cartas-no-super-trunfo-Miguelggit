#include <stdio.h>

int main(){

    char estado;
    char codigo[3];
    char cidade[20];
    unsigned long int populacao;
    float area;
     unsigned long long int pib;
    int pontos;
    int densidadePopulacional;
    float PIB_percapita;
    unsigned long long SuperPoder;

    char estado2;
    char codigo2[3];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    unsigned long long pib2;
    int pontos2;
    int densidadePopulacional2;
    float PIB_percapita2;
    unsigned long long int SuperPoder2;

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
    scanf("%lu", &populacao);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area);
    printf("Qual o valor do PIB? ");
    scanf(" %llu", &pib);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos);
    densidadePopulacional = populacao / area;
    PIB_percapita = pib / populacao;
    SuperPoder = (int)(populacao + area + pib + pontos + PIB_percapita) + 1/densidadePopulacional; 

    printf("\nCarta 1 \n"); 
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Areá: %.2f KM²\n", area);
    printf("PIB: %llu bilhões de reais \n", pib);
    printf("Numeros de pontos turisticos %i \n", pontos);
    printf("Densidade populacional: %d hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: R$%.2lf\n", PIB_percapita);
    printf("Super Poder: %llu\n", SuperPoder);

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
    scanf("%lu", &populacao2);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area2);
    printf("Qual o valor do PIB? ");
    scanf(" %llu", &pib2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos2);
    densidadePopulacional2 = populacao2 / area2;
    PIB_percapita2 = pib2 / populacao2;
    SuperPoder2 = (int)(populacao2 + area2 + pib2 + pontos2 + PIB_percapita2) + 1/densidadePopulacional2; 

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Areá: %.2f KM²\n", area2);
    printf("PIB: %llu bilhões de reais \n", pib2);
    printf("Numeros de pontos turisticos %i\n", pontos2);
    printf("Densidade populacional: %d hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$%.2f\n", PIB_percapita2);
    printf("Super Poder: %llu\n", SuperPoder2);

    printf("\n=================\n");
    printf("Comparando cartas\n");
    printf("=================\n");

    int comaparacaoPopulacao = populacao > populacao2;
    if (comaparacaoPopulacao == 1){
        printf("\nPopulação: Carta 1 venceu (%d)\n", comaparacaoPopulacao);
    } else {
        printf("\nPopulação: Carta 2 venceu (%d)\n", comaparacaoPopulacao);
    }

    int comparacaoArea = area > area2;
    if (comparacaoArea == 1) {
        printf("Área: Carta 1 venceu (%d)\n", comparacaoArea);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", comparacaoArea);
    }

    int comparacaoPIB = pib > pib2;
    if(comparacaoPIB == 1){
        printf("PIB: Carta 1 venceu (%d)\n", comparacaoPIB);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", comparacaoPIB);
    }

    int comparacaoPontos = pontos > pontos2;
    if(comparacaoPontos == 1){
        printf("Pontos turisticos: Carta 1 venceu (%d)\n", comparacaoPontos);
    } else {
        printf("Pontos turisticos: Carta 2 venceu (%d)\n", comparacaoPontos);
    }

    int comparacaoDensidade = densidadePopulacional < densidadePopulacional2;
    if(comparacaoDensidade == 1) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", comparacaoDensidade);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacaoDensidade);
    }

    int comparacaoPIBperCapita = PIB_percapita > PIB_percapita2;
    if(comparacaoPIBperCapita == 1){
        printf("PIB per Capita: Carta 1 venceu (%d)\n", comparacaoPIBperCapita);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", comparacaoPIBperCapita);
    }

    int comparacaoSuperPoder = SuperPoder > SuperPoder2;
    if(comparacaoSuperPoder == 1){
        printf("Super Poder: Carta 1 venceu (%d)\n", comparacaoSuperPoder);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", comparacaoSuperPoder);
    }

    return 0;

}