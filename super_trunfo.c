#include <stdio.h>

/* exemplo
Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50*/
//_______________________
/* mais info
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int */

// iniciando código C

int main(){
    char greeting[200];
    char carta1[20];
    char Codigo[3];
    char estado [30];
    int populacao;
    float area;
    float PIB;
    int Pontos_turísticos;
    

//Iniciando o jogo

    printf("Seja bem vindo ao Super Trunfo, vamos começar cadastrando as informações de cada carta! \n", greeting);
    
    printf("Digite o estado \n", estado);
    scanf("%[^\n]", estado);
    printf("Digite o código da carta:\n",Codigo);
    scanf("%s", Codigo);



    printf("Carta 1: \n", carta1); 
    printf("Nome da cidade: %s\n", estado);
    printf("Código: %s",Codigo);




}




