#include <stdio.h>


int main(){
    char greeting[200];
    char carta1[20];
    char letraestado;
    char codigocarta[4];
    char nomecidade[40];
    int populacao;
    float area;
    float PIB;
    int Pontos_turísticos;
    


    printf("Seja bem vindo ao Super Trunfo, vamos começar cadastrando as informações de cada carta! \n", greeting);
    printf("Carta 1: \n", carta1);
    printf("Digite uma letra de 'A' a 'H' como ESTADO dessa carta: \n", letraestado);
    scanf("%c", &letraestado);
    printf("Digite o código da carta sendo a letra escolhida e um número de 01 a 04 (ex: A01, B03):\n", codigocarta);
    scanf("%s", &codigocarta);
    printf("Digite o nome de uma cidade: \n", nomecidade);
    scanf(" %[^\n]", nomecidade);
    printf("Digite o número de habitantes dessa cidade: \n", populacao);
    scanf("%d", &populacao);
    printf("Defina a área da cidade em quilômetros quadrados: \n", area);
    scanf("%f", &area);
    printf("Digite o Produto Interno Bruto da cidade- (PIB: \n", PIB);
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turísticos da cidade: \n", Pontos_turísticos);
    scanf("%d", &Pontos_turísticos);




    printf("Carta 1: \n", carta1); 
    printf("Estado: %c\n", letraestado);
    printf("Código: %s\n", codigocarta);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos);

    char greeting2[200];
    char carta2[20];
    char letraestado2;
    char codigocarta2[4];
    char nomecidade2[40];
    int populacao2;
    float area2;
    float PIB2;
    int Pontos_turísticos2;

    printf("Vamos cadastrar as informações da carta 2 ! \n", greeting2);

    printf("Digite uma letra de 'A' a 'H' como ESTADO dessa carta: \n", letraestado2);
    scanf("%c", &letraestado2);
   // printf("Digite o código da carta sendo a letra escolhida e um número de 01 a 04 (ex: A01, B03):\n", codigocarta2);
   // scanf("%s", &codigocarta2);
   // printf("Digite o nome de uma cidade: \n", nomecidade2);
  //  scanf(" %[^\n]", nomecidade2);
  //  printf("Digite o número de habitantes dessa cidade: \n", populacao2);
  //  scanf("%d", &populacao2);
  //  printf("Defina a área da cidade em quilômetros quadrados: \n", area2);
  //  scanf("%f", &area2);
  //  printf("Digite o Produto Interno Bruto da cidade- (PIB: \n", PIB2);
  //  scanf("%f", &PIB2);
   // printf("Digite a quantidade de pontos turísticos da cidade: \n", Pontos_turísticos2);
   // scanf("%d", &Pontos_turísticos2);




    printf("Carta 2: \n", carta2); 
    printf("Estado: %c\n", letraestado2);
  //  printf("Código: %s\n", codigocarta2);
  //  printf("Cidade: %s\n", nomecidade2);
  //  printf("População: %d\n", populacao2);
  //  printf("Área: %.2f km² \n", area2);
   // printf("PIB: %.2f bilhões de reais\n", PIB2);
   // printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos2);





}




