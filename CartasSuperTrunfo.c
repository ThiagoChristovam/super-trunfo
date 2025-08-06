#include <stdio.h>

int main() {

 printf("desafio super trunfo\n\n");
 
 printf("digite informções da primeira carta\n\n");

char estado[20];
char codigo_da_carta[10];
char nome_da_cidade[20];
unsigned long int população;
float area;
float PIB;
int numero_ponto_turistico;
float densidade_populacional;
float PIB_per_capital;
float super_poder1;

printf("digite estado: \n");
scanf("%s", estado);

printf("digite codigo da carta: \n");
scanf("%s", codigo_da_carta);

printf("digite nome da cidade: \n");
scanf("%s", nome_da_cidade);

printf("digite população: \n");
scanf("%lu", &população);

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
//calculo soma população, area, PIB, ponto turistico, PIB per capital / inverso densidade populacional
super_poder1 = população + area + PIB + numero_ponto_turistico + PIB_per_capital + (1 / densidade_populacional);


printf("nome do estado: %s\n",estado);
printf("codigo da carta: %s\n",codigo_da_carta);
printf("nome da cidade: %s\n",nome_da_cidade);
printf("numero da população: %lu\n",população);
printf("area: %f hab/km²\n",area);
printf("PIB: %f\n",PIB);
printf("numero de ponto turistico: %d\n",numero_ponto_turistico);
printf("densidade populacional: %f hab/km²\n",densidade_populacional);
printf("PIB per capital: %f\n",PIB_per_capital);
printf("super poder1: %f\n\n",super_poder1);

printf("agora digite informações da carta 2\n\n");

char estado2[20];
char codigo_da_carta2[10];
char nome_da_cidade2[20];
unsigned long int população2;
float area2;
float PIB2;
int numero_ponto_turistico2;
float densidade_populacional2;
float PIB_per_capital2;
float super_poder2;
printf("digite estado: \n");
scanf("%s", estado2);

printf("digite codigo da carta: \n");
scanf("%s", codigo_da_carta2);

printf("digite nome da cidade: \n");
scanf("%s", nome_da_cidade2);

printf("digite população: \n");
scanf("%lu", &população2);

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
//calculo soma população, area, PIB, ponto turistico, PIB per capital / inverso densidade populacional
super_poder2 = população2 + area2 + PIB2 + numero_ponto_turistico2 + PIB_per_capital2 + (1 / densidade_populacional2);

printf("nome do estado: %s\n",estado2);
printf("codigo da carta: %s\n",codigo_da_carta2);
printf("nome da cidade: %s\n",nome_da_cidade2);
printf("numero da população: %lu\n",população2);
printf("area: %f\n",area2);
printf("PIB: %f\n",PIB2);
printf("numero de ponto turistico: %d\n",numero_ponto_turistico2);
printf("densidade populacional: %f hab/km²\n",densidade_populacional2);
printf("PIB per capital: %f\n",PIB_per_capital2);
printf("super poder1: %f\n",super_poder2);
//caparando cartas
printf("\nComparação de Cartas:\n");

printf("População: Carta %d venceu (%d)\n", 
    (população > população2) ? 1 : 2, (população > população2));

printf("Área: Carta %d venceu (%d)\n", 
    (area > area2) ? 1 : 2, (area > area2));

printf("PIB: Carta %d venceu (%d)\n", 
    (PIB > PIB2) ? 1 : 2, (PIB > PIB2));

printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
    (numero_ponto_turistico > numero_ponto_turistico2) ? 1 : 2, (numero_ponto_turistico > numero_ponto_turistico2));

printf("Densidade Populacional: Carta %d venceu (%d)\n", 
    (densidade_populacional < densidade_populacional2) ? 1 : 2, (densidade_populacional < densidade_populacional2));

printf("PIB per capita: Carta %d venceu (%d)\n", 
    (PIB_per_capital > PIB_per_capital2) ? 1 : 2, (PIB_per_capital > PIB_per_capital2));

printf("Super Poder: Carta %d venceu (%d)\n", 
    (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

//comparação entre população
printf("\n comparação entre população\n");
if (população > população2) {
    printf("carta 1 tem mais população que a carta 2\n");}
    else { printf("carta 2 tem mais população que a carta 1\n");
    }
    return 0;
}