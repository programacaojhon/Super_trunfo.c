#include <stdio.h>


int main(){

    int estado1, estado2, populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, nome1, nome2 ;
   
    
    printf(" *** SUPER TRUNFO - ESTADO 1 *** \n");

printf("Digite o nome do estado: \n");
scanf("%d", &estado1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome1);

printf("Digite a população: \n");
scanf("%d", &populacao1);

printf("Digite a área: \n");
scanf("%f", &area1);

printf("Digite o pib: \n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontos1);

printf(" Nome do estado:\n %d", estado1);
printf("Nome da cidade:\n %f", nome1);
printf("População da cidade:\n %d", populacao1);
printf("Área da cidade:\n %f", area1);
printf("Pib:\n %f", pib1);
printf("Número de pontos turísticos:\n %d", pontos1);


    return 0;
}
