#include <stdio.h>

              // CÓDIGO FONTE PARA A CRIAÇÃO DAS CARTAS DO JOGO SUPER TRUNFO.
              
int main(){  
    
    // CRIAÇÃO DAS VARIÁVEIS QUE VÃO RECEBER AS INFORMAÇÕES DAS CARTAS.

    //VARIÁVEIS PRIMEIRA CARTA.
    char estado1[30];
    char codigocarta1[30];
    char nomecidade1[30];
    int populacao1;
    int areakm1;
    float pib1;
    int numturisticos1;
    int densidadedemografica1;
    float pibpercapita1;
    long long int superpoder1;

    // VARIÁVEIS SEGUNDA CARTA.
    char estado2[30];
    char codigocarta2[30];
    char nomecidade2[30];
    int populacao2;
    int areakm2;
    float pib2;
    int numturisticos2;
    int densidadedemografica2;
    float pibpercapita2; 
    long long int superpoder2;

    // CRIAÇÃO DA ENTRADA DE DADOS (INFORMAÇÕES) DAS CARTAS.

    // PRIMEIRA CARTA.
    printf("Olá, seja bem vindo a criação das cartas do jogo. A seguir será solicitado informações que serão adicionadas a cada carta do jogo. Vamos começar! \n");
    
    printf("Primeiro, digite o estado: ");
    scanf("%s", &estado1);

    printf("Agora digite o código da carta: ");
    scanf("%s", &codigocarta1);

    printf("Agora digite o nome da cidade: ");
    scanf("%s", &nomecidade1);

    printf("Agora digite a população: ");
    scanf("%d", &populacao1);

    printf("Agora digite a área em km²: ");
    scanf("%d", &areakm1);

    printf("Agora digite o pib: ");
    scanf("%f", &pib1);

    printf("Agora digite o número de pontos turísticos: ");
    scanf("%d", &numturisticos1);
    
// SEGUNDA CARTA.
    
    printf("Agora vamos cadastrar a segunda carta!\n");
    
    printf("Primeiro, digite o estado: ");
    scanf("%s", &estado2);

    printf("Agora digite o código da carta: ");
    scanf("%s", &codigocarta2);

    printf("Agora digite o nome da cidade: ");
    scanf("%s", &nomecidade2);

    printf("Agora digite a população: ");
    scanf("%d", &populacao2);

    printf("Agora digite a área em km²: ");
    scanf("%d", &areakm2);

    printf("Agora digite o pib: ");
    scanf("%f", &pib2);

    printf("Agora digite o número de pontos turísticos: ");
    scanf("%d", &numturisticos2);

    // CRIAÇÃO DOS CÓDIGOS PARA CALCULAR A DENSIDADE POPULACIONAL, O PIB PER CAPITA E O SUPER PODER AUTOMATICAMENTE.

    pibpercapita1 = (float)pib1 / populacao1;
    densidadedemografica1 = populacao1 / areakm1;   // REFERENTE PRIMEIRA CARTA.

    pibpercapita2 = (float)pib2 / populacao2;
    densidadedemografica2 = populacao2 / areakm2; // REFERENTE A SEGUNDA CARTA.

    superpoder1 = (int)populacao1 + areakm1 + pib1 + numturisticos1 + densidadedemografica1 + pibpercapita1; // REFERENTE PRIMEIRA CARTA
   
    superpoder2 = (int)populacao2 + areakm2 + pib2 + numturisticos2 + densidadedemografica2 + pibpercapita2; // REFERENTE SEGUNDA CARTA

   // IMPRIMINDO NA TELA OS DADOS DA PRIMEIRA CARTA CADASTRADA.
    
    printf("**** Dados da primeira carta cadastrada: ***** \n Estado: %s\n Código da carta: %s\n Nome da Cidade: %s\n População: %d\n Área em Km²: %d km²\n Pib: R$ %.2f\n Números Pontos Turísticos: %d\n", estado1, codigocarta1, nomecidade1, populacao1, areakm1, pib1, numturisticos1);
    printf(" Pib per capita: R$ %.2f\n", pibpercapita1);
    printf(" Densidade demográfica: %d Hab/km²\n", densidadedemografica1);

   // IMPRIMINDO NA TELA OS DADOS DA SEGUNDA CARTA CADASTRADA.
    
    printf("**** Dados da segunda carta cadastrada: ***** \n Estado: %s\n Código da carta: %s\n Nome da Cidade: %s\n População: %d\n Área em Km²: %d km²\n Pib: R$ %.2f\n Números Pontos Turísticos: %d\n", estado2, codigocarta2, nomecidade2, populacao2, areakm2, pib2, numturisticos2);
    printf(" Pib per capita: R$ %.2f\n", pibpercapita2);
    printf(" Densidade demográfica: %d Hab/km²\n", densidadedemografica2);

    // CÓDIGOS PARA DEFINIR A CARTA VENCEDORA.

    printf("**** Atenção para os resultados a seguir. A carta com menor Densidade Populacional é a vencedora. Demais propriedades vence a carta com maior valor. ****\n");
    printf(" Resultado 0 para a carta perdedora e 1 para a carta vencedora: \n");

    printf("Densidade Democráfica da primeira carta é MENOR que o valor da segunda carta?: %d\n", densidadedemografica1 < densidadedemografica2);
    printf("Polulação da primeira carta é MAIOR que o valor da segunda carta?: %d\n", populacao1 > populacao2);
    printf("Área Km² da primeira carta é MAIOR que o valor da segunda carta?: %d\n", areakm1 > areakm2);
    printf("Números de pontos turísticos da primeira carta é MAIOR que o valor da segunda carta?: %d\n", numturisticos1 > numturisticos2);
    printf("Pib primeira carta é MAIOR que o valor da segunda carta?: %lld\n", pib1 > pib2);
    printf("Pib per capita da primeira carta é MAIOR que o valor da segunda carta?: %lld\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder da primeira carta é MAIOR que o valor da segunda carta?: %lld\n", superpoder1 > superpoder2);





    return 0;




}
    

    

