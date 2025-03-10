#include <stdio.h>


    #include <stdio.h>

    int main() {
        char estado[100];
        char cidade[100];
        float populacao;
        float area;
        float pib;
        float pontos;
    

printf(" *** CARTA 1***\n");

printf("Digite o nome do estado 1:\n");
scanf("%s", &estado);

printf("Digite o nome da cidade 1: \n");
scanf("%s", &cidade);

printf("Digite a população da cidade 1: \n");
scanf("%f", &populacao);

printf("Digite a área da cidade 1: \n");
scanf("%f", area);

printf("Digite o PIB da cidade 1: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos da cidade 1: \n");
scanf("%f", &pontos);



printf("O nome do estado da primeira carta é: %s \n", estado);
printf("O nome da cidade da primeira carta é: %s \n", cidade);
printf("A populaçao da cidade da primeira carta é: %f \n", populacao);
printf("A área da cidade da primeira carta é: %f \n", area);
printf("O PIB da cidade da primeira carta é: %f \n", pib),
printf("O PIB da cidade da primeira carta é: %f \n", pib),
printf("O número de pontos turísticos da cidade da primeira carta é: %f \n", pontos);

return 0;
