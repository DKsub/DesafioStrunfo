//Bibliotecas utilizadas no programa.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    //Campo 1: Declaração das Variaveis que serão utilizadas para armazenar os atributos das Cartas.
    int switch_num;
    
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
    
    //Campo 2: Funções de Entrada onde o Usuário irá Digitar as Informações das 2 Cartas e cadastrar elas no sistema.

    printf("----------- Cadastro Das Cartas -----------");
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
    
    //Calculo de densidade demografica, pib per capita, e super poder das 2 cartas
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
    
    //Calculo de densidade demografica, pib per capita, e super poder das 2 cartas
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
    //Campo 4, Menu Interativo do jogo e local onde a comparação entre 2 atributos selecionados 
    // pelo usuário será feita.
   printf("----------Jogo Super Trunfo---------\n");
    printf("Escolha Uma Opção: Casos 1 a 6 tratam de comparação simples. \n");
    printf("1 = Exibir nome dos Estados\n");
    printf("2 = Comparar População  \n");
    printf("3 = Comparar Área \n");
    printf("4 = Comparar PIB \n");
    printf("5 = Comparar Número de Pontos Turísticos \n");
    printf("6 = Comparar Densidade Demográfica \n");
    printf("7 = Comparação Avançada com Dois Atributos \n");
    printf("Escolha: \n");
    scanf("%d", &switch_num);

    switch (switch_num)
    {
    case 1:
    printf("--------Nome dos Estados---------\n");
    printf("Estado 1: %s Estado 2: %s", estado, estado2);
    break;


    case 2:
    printf("--------Comparar População---------\n");
    if (populacao > populacao2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 1: com População de %lu Venceu Estado 2: Com População de %lu \n", populacao, populacao2);
    }else if (populacao2 > populacao)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 2: com População de %lu Venceu Estado 1: Com População de %lu \n", populacao2, populacao);
    }else if (populacao == populacao2)
    {
    printf("Os 2 Estados Empataram");
    }
    break;


    case 3:
    printf("--------Comparar Área---------\n");
    if (area > area2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 1: Com Área de %f Venceu Estado 2: Com Área de %f \n", area, area2);
    }else if (area2 > area)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 2: com Área de %f Venceu Estado 1: Com Área de %f \n", area2, area);
    }else if (area == area2)
    {
    printf("Os 2 Estados Empataram");
    }
    break;


    case 4:
    printf("--------Comparar PIB---------\n");
    if (pib > pib2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 1: Com PIB de %f Venceu Estado 2: Com PIB de %f \n", pib, pib2);
    }else if (pib > pib2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 2: com PIB de %f Venceu Estado 1: Com PIB de %f \n", pib2, pib);
    }else if (pib == pib2)
    {
    printf("Os 2 Estados Empataram");
    }
    break;


    case 5:
    printf("--------Comparar Pontos Turísticos---------\n");
    if (pontosTuristicos > pontosTuristicos2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 1: Com Pontos Turísticos de %d Venceu Estado 2: Com Pontos Turísticos de %d \n", pontosTuristicos, pontosTuristicos2);
    }else if (pontosTuristicos > pontosTuristicos2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 2: Com Pontos Turísticos de %d Venceu Estado 1: Com Pontos Turísticos de %d \n", pontosTuristicos2, pontosTuristicos);
    }else if (pontosTuristicos == pontosTuristicos2)
    {
    printf("Os 2 Estados Empataram");
    }
    break;


    case 6:
    printf("--------Comparar Densidade Demográfica---------\n");
    if (densidadepupulacao < densidadepupulacao2)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 1: Com Densidade Demográfica de %f Venceu Estado 2: Com Densidade Demográfica de %f \n", densidadepupulacao, densidadepupulacao2);
    }else if (densidadepupulacao2 < densidadepupulacao)
    {
    printf("Estado 1: %s Estado 2: %s \n", estado, estado2);
    printf("Estado 2: Com Densidade Demográfica de %f Venceu Estado 1: Com Densidade Demográfica de %f \n", densidadepupulacao2, densidadepupulacao);
    }else if (densidadepupulacao == densidadepupulacao2)
    {
    printf("Os 2 Estados Empataram");
    }
    break;

//Campo 5: Local onde a comparação avançada ocorre, onde 2 atributos das 2 cartas são somados
// e a carta com maior valor de soma vence.
case 7:
    printf("--------Comparação Avançada com Dois Atributos---------\n");

    int atributo1, atributo2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float soma1, soma2;

    // Menu dinâmico para o primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 = População\n");
    printf("2 = Área\n");
    printf("3 = PIB\n");
    printf("4 = Pontos Turísticos\n");
    printf("5 = Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 = População\n"); break;
                case 2: printf("2 = Área\n"); break;
                case 3: printf("3 = PIB\n"); break;
                case 4: printf("4 = Pontos Turísticos\n"); break;
                case 5: printf("5 = Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Validação
    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("Atributos inválidos ou repetidos!\n");
        break;
    }

    // Função para obter valores
    valor1_c1 = (atributo1 == 1) ? populacao :
                (atributo1 == 2) ? area :
                (atributo1 == 3) ? pib :
                (atributo1 == 4) ? pontosTuristicos :
                densidadepupulacao;

    valor2_c1 = (atributo2 == 1) ? populacao :
                (atributo2 == 2) ? area :
                (atributo2 == 3) ? pib :
                (atributo2 == 4) ? pontosTuristicos :
                densidadepupulacao;

    valor1_c2 = (atributo1 == 1) ? populacao2 :
                (atributo1 == 2) ? area2 :
                (atributo1 == 3) ? pib2 :
                (atributo1 == 4) ? pontosTuristicos2 :
                densidadepupulacao2;

    valor2_c2 = (atributo2 == 1) ? populacao2 :
                (atributo2 == 2) ? area2 :
                (atributo2 == 3) ? pib2 :
                (atributo2 == 4) ? pontosTuristicos2 :
                densidadepupulacao2;

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Exibição dos valores
    printf("\nCarta 1: %s\n", estado);
    printf("Atributo %d: %.2f\n", atributo1, valor1_c1);
    printf("Atributo %d: %.2f\n", atributo2, valor2_c1);
    printf("Soma: %.2f\n", soma1);

    printf("\nCarta 2: %s\n", estado2);
    printf("Atributo %d: %.2f\n", atributo1, valor1_c2);
    printf("Atributo %d: %.2f\n", atributo2, valor2_c2);
    printf("Soma: %.2f\n", soma2);

    // Resultado final
    if (soma1 == soma2) {
        printf("\nResultado: Empate!\n");
    } else {
        int vencedor = (soma1 > soma2) ? 1 : 2;
        printf("\nResultado: Carta %d (%s) venceu!\n", vencedor, vencedor == 1 ? estado : estado2);
    }
    break;


default:
printf("Opção Inválida");
break;
}

    
}