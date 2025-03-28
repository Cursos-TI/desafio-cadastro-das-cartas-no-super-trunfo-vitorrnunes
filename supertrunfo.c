#include <stdio.h>

int main(){
  // REFERENTE A CARTA 1
 char estado[50];
 char codigodacidade[50];
 char nomedacidade[50];
 int populacao;
 int pontosturisticos;
 float area;
 float pib;
 float densidadepopulacional;
 float pibpercapital;
 float superpoder;

 // Referente a conclusão da carta vencedora

int vencedor1;
int vencedor2;
int vencedor3;
int vencedor4;
int vencedor5;
int vencedor6;
int vencedor7;


// Carta 1

 printf("Estados: ");
 scanf("%s", &estado);

 printf("Codigo da cidade: ");
 scanf("%s", &codigodacidade);

 printf("Nome da cidade: ");
 scanf("%s", &nomedacidade);

 printf("Populaçao: ");
 scanf("%d", &populacao);
 
 printf("Pontos turisticos: ");
 scanf("%d", &pontosturisticos);

 printf("Área: ");
 scanf("%f", &area);

 printf("Pib: ");
 scanf("%f", &pib);



  // calculos carta 1


 densidadepopulacional = (populacao + area ) /2;

 pibpercapital = (pib + populacao) /2;

  //conclusão para o super poder da carta 1
  
  superpoder = (populacao + area + pib + pontosturisticos + pibpercapital + densidadepopulacional);



//REFERENTE A CARTA 2

char estado2[50];
char codigodacidade2[50];
char nomedacidade2[50];
int populacao2;
int pontosturisticos2;
float area2;
float pib2;
float densidadepopulacional2;
float pibpercapital2;
float superpoder2;

printf("Estado: ");
scanf("%s", &estado2);


printf("Codigo da cidade: ");
scanf("%s", &codigodacidade2);


printf("Nome da cidade: ");
 scanf("%s", &nomedacidade2);


 printf("População: ");
 scanf("%d", &populacao2);
 

 printf("Pontos turisticos: ");
 scanf("%d", &pontosturisticos2);


 printf("Área: ");
 scanf("%f", &area2);


 printf("Pib: ");
 scanf("%f", &pib2);
  
 
 
 //        calculos carta 2



 densidadepopulacional2 = (populacao2 + area2 ) /2;

 pibpercapital2 = (pib2 + populacao2) /2;


 // conclusão do super poder da carta 2

 superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapital2 + densidadepopulacional2);


// carta 1
printf("Estado é: %s\n", estado);
printf("Codigo da cidade %s\n", codigodacidade);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Pontos turisticos: %d\n", pontosturisticos);
printf("Área: %.2f km²\n", area);
printf("Pib: %.2f Bilhões de reais\n", pib);
printf("Densidade populacional é: %.2f hab/km²\n", densidadepopulacional);
printf("O pib per capital é: R$ %.2f\n", pibpercapital);
printf("O super poder é: %.2f\n", superpoder);


//carta 2

printf("Estado é: %s\n",estado2);
printf("Codigo da cidade %s\n",codigodacidade2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Pontos turisticos: %d\n", pontosturisticos2);
printf("Área: %.2f km²\n",area2);
printf("Pib: %.2f Bilhões de reais\n",pib2);
printf("Densidade populacional é: %.2f hab/km²\n", densidadepopulacional2);
printf("O pib per capital é: R$ %.2f\n", pibpercapital2);
printf("O super poder é: %.2f\n", superpoder2);


// Definição de vencedor

 vencedor1 = populacao > populacao2;
 vencedor2 = pontosturisticos > pontosturisticos2;
 vencedor3 = area > area2;
 vencedor4 = pib > pib2;
 vencedor5 = densidadepopulacional < densidadepopulacional2;
 vencedor6 = pibpercapital > pibpercapital2;
 vencedor7 = superpoder > superpoder2;


printf("População: (%s) Venceu %d\n", codigodacidade, vencedor1);
printf("Pontos Turisticos: (%s) Venceu %d\n", codigodacidade, vencedor2);
printf("Área: (%s) Venceu %d\n", codigodacidade, vencedor3);
printf("Pib: (%s) Venceu %d\n", codigodacidade, vencedor4);
printf("Densidade Populacional: (%s) Venceu %d\n",codigodacidade2, vencedor5);
printf("Pib per Capital: (%s) Venceu %d\n", codigodacidade, vencedor6);
printf("Super Poder: (%s) Venceu %d\n", codigodacidade, vencedor7);

 return 0;

}