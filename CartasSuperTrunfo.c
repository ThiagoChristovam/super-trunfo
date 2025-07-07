#include <stdio.h>

int main() {

 printf("desafio super trunfo\n\n");
 
 printf("digite informções da primeira carta\n\n");

char estado[20];
char codigo_da_carta[10];
char nome_da_cidade[20];
int população;
float area;
float PIB;
int numero_ponto_turistico;
float densidade_populacional;
float PIB_per_capital;

printf("digite estado: \n");
scanf("%s", estado);

printf("digite codigo da carta: \n");
scanf("%s", codigo_da_carta);

printf("digite nome da cidade: \n");
scanf("%s", nome_da_cidade);

printf("digite população: \n");
scanf("%d", &população);

printf("digite area: \n");
scanf("%f", &area);

printf("digite PIB: \n");
scanf("%f", &PIB);

printf("digite numero ponto turistico: \n");
scanf("%d", &numero_ponto_turistico);

//calculo divisão população /area = densidade populacional
densidade_populacional = (float)população / area;
//calculo  divisão PIB / populacão = PIB per capital
PIB_per_capital = (float)PIB / população;

printf("nome do estado: %s\n",estado);
printf("codigo da carta: %s\n",codigo_da_carta);
printf("nome da cidade: %s\n",nome_da_cidade);
printf("numero da população: %d\n",população);
printf("area: %f hab/km²\n",area);
printf("PIB: %f\n",PIB);
printf("numero de ponto turistico: %d\n",numero_ponto_turistico);
printf("densidade populacional: %f hab/km²\n",densidade_populacional);
printf("PIB per capital: %f\n\n",PIB_per_capital);

printf("agora digite informações da carta 2\n\n");

char estado2[20];
char codigo_da_carta2[10];
char nome_da_cidade2[20];
int população2;
float area2;
float PIB2;
int numero_ponto_turistico2;
float densidade_populacional2;
float PIB_per_capital2;

printf("digite estado: \n");
scanf("%s", estado2);

printf("digite codigo da carta: \n");
scanf("%s", codigo_da_carta2);

printf("digite nome da cidade: \n");
scanf("%s", nome_da_cidade2);

printf("digite população: \n");
scanf("%d", &população2);

printf("digite area: \n");
scanf("%f", &area2);

printf("digite PIB: \n");
scanf("%f", &PIB2);

printf("digite numero ponto turistico: \n");
scanf("%d", &numero_ponto_turistico2);

//calculo divisão população /area = densidade populacional
densidade_populacional2 = (float)população2 / area2;
//calculo  divisão PIB / populacão = PIB per capital
PIB_per_capital2 = (float)PIB2 / população2;

printf("nome do estado: %s\n",estado2);
printf("codigo da carta: %s\n",codigo_da_carta2);
printf("nome da cidade: %s\n",nome_da_cidade2);
printf("numero da população: %d\n",população2);
printf("area: %f\n",area2);
printf("PIB: %f\n",PIB2);
printf("numero de ponto turistico: %d\n",numero_ponto_turistico2);
printf("densidade populacional: %f hab/km²\n",densidade_populacional2);
printf("PIB per capital: %f\n",PIB_per_capital2);

    return 0;
}