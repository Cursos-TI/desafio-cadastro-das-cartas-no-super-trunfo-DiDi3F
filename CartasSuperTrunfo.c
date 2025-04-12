#include <stdio.h>

int main(){

    //Definir as variáveis para a primeria carta
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Definir as variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    //Entrada de dados para a primeira carta
    printf("Digite os Dados da Primeira Carta: \n");

    printf("Digite o Estado (letra A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Àrea (em Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB ( em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Entrada de dados para a segunda carta
    printf("Digite os Dados da Segunda Carta: \n");

    printf("Digite o Estado (letra A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B01): \n");
    scanf(" %s", &codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s" , &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    //Exibir os dados da primeira carta 
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibir os dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;

}