#include <stdio.h>

int main(){
    char estado[100], estd[100];
    char cidade[100], cdd[100];
    float populacao, area, pib, pontos, pplc, ar, pb, pnts, densidade, dnsdd, renda, rnd;
        
    printf(" *** CARTA 1***\n");

    printf("Digite o nome do estado 1:\n");
    scanf("%s", estd);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cdd);

    printf("Digite a população da cidade 1: \n");
    scanf("%f", &pplc);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &ar);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pb);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%f", &pnts);

    printf(" *** CARTA 2***\n");

    printf("Digite o nome do estado 2:\n");
    scanf("%s", estado);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade 2: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%f", &pontos);

    densidade = pplc/ar;
    dnsdd = populacao/area;
    renda = pb/pplc;
    rnd = pib/populacao;


    printf("O nome do estado da primeira carta é: %s \n", estd);
    printf("O nome da cidade da primeira carta é: %s \n", cdd);
    printf("A populaçao da cidade da primeira carta é: %.2f \n", pplc);
    printf("A área da cidade da primeira carta é: %.2f \n", ar);
    printf("O PIB da cidade da primeira carta é: %.2f \n", pb);
    printf("O número de pontos turísticos da cidade da primeira carta é: %.2f \n", pnts);
    printf("A densidade da cidade da primeira carta é: %.2f \n", densidade);
    printf("A renda per capita da cidade da primeira carta é: %.2f \n", renda);

    printf("O nome do estado da segunda carta é: %s \n", estado);
    printf("O nome da cidade da segunda carta é: %s \n", cidade);
    printf("A populaçao da cidade da segunda carta é: %.2f \n", populacao);
    printf("A área da cidade da segunda carta é: %.2f \n", area);
    printf("O PIB da cidade da segunda carta é: %.2f \n", pib);
    printf("O número de pontos turísticos da cidade da segunda carta é: %.2f \n", pontos);
    printf("A densidade da cidade da segunda carta é: %.2f \n", dnsdd);
    printf("A renda per capita da cidade da segunda carta é: %.2f \n", rnd);


    return 0;
}