#include <stdio.h>

int main(){

    //Campo 1: Declaração das Variaveis que serão utilizadas para armazenar os atributos das Cartas.
    char estado[30];
    char codigoCarta[30];
    char nomeCidade[30];
    unsigned long int populacao;
    int pontosTuristicos;
    float pib;
    float area;
    float pib_per_capita, densidadepupulacao;
    float superPoder;

    char estado2[30];
    char codigoCarta2[30];
    char nomeCidade2[30];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float pib2;
    float area2;
    float pib_per_capita2, densidadepupulacao2;
    float superPoder2;
    
    //Campo 2: Funções de Entrada onde o Usuário irá Digitar as Informações.
    printf("Insira o nome do Estado \n");
    scanf("%s", estado);

    printf("Insira o Código da Carta \n");
    scanf("%s", codigoCarta);

    printf("Insira o nome da Cidade \n");
    scanf("%s", nomeCidade);

    printf("Insira o número Populacional \n");
    scanf("%lu", &populacao);

    printf("Insira o número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos);

    printf("Insira o PIB \n");
    scanf("%f", &pib);

    printf("Insira a Área em Kilometros Quadrados \n");
    scanf("%f", &area);

    densidadepupulacao = populacao / area;
    pib_per_capita = pib / populacao;

    superPoder = (float) populacao + pontosTuristicos + pib + area + densidadepupulacao + pib_per_capita;
    
    printf("------------------------------------------------- \n");

    printf("Insira o nome do Estado \n");
    scanf("%s", estado2);

    printf("Insira o Código da Carta 2 \n");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da Cidade \n");
    scanf("%s", nomeCidade2);

    printf("Insira o número Populacional \n");
    scanf("%lu", &populacao2);

    printf("Insira o número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos2);

    printf("Insira o PIB \n");
    scanf("%f", &pib2);

    printf("Insira a Área em Kilometros Quadrados \n");
    scanf("%f", &area2);

    densidadepupulacao2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    superPoder2 = (float) populacao2 + pontosTuristicos2 + pib2 + area2 + densidadepupulacao2 + pib_per_capita2;
    
  
    printf("------------------------------------------------- \n");
    

    //Campo 3:Funções de Saída dos Dados das Cartas Digitados pelo Usuário.
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código %s \n", codigoCarta);
    printf("Nome Da Cidade: %s \n", nomeCidade);
    printf("População %lu de Habitantes \n", populacao);
    printf("Pontos Turisticos: %d \n", pontosTuristicos);
    printf("Área %f km² \n", area);
    printf("PIB %f de reais \n", pib);
    printf("Densidade Populacional: %f hab/km² \n", densidadepupulacao);
    printf("PIB per Capita: %f reais \n", pib_per_capita);
    
    printf("------------------------------------------------- \n");
    
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código %s \n", codigoCarta2);
    printf("Nome Da Cidade: %s \n", nomeCidade2);
    printf("População %lu de Habitantes \n", populacao2);
    printf("Pontos Turisticos: %d \n", pontosTuristicos2);
    printf("Área %f km² \n", area2);
    printf("PIB %f de reais \n", pib2);
    printf("Densidade Populacional: %f hab/km² \n", densidadepupulacao2);
    printf("PIB per Capita: %f reais  \n", pib_per_capita2);

    printf("------------------------------------------------- \n");
    //Campo 4, Área de Comparação de Atributos das Cartas.
    printf("Comparação de cartas (Atributo: População): \n");
    
    printf("Carta 1 - %s População: %lu \n", estado, populacao);
    printf("Carta 2 - %s População: %lu \n", estado2, populacao2);
    //Campo 5 Comparação do atributo população.
    if (populacao > populacao2)
    {
        printf("Carta 1 - %s Venceu \n", estado);
    }else{
        printf("Carta 2 - %s Venceu \n", estado2);
    }
    
}