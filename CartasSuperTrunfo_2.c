#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    //Variaveis para cada carta
    char estado1, cidade1[20]; 
    char estado2, cidade2[20]; 

    int habitantes1, pt_Turistico1, cod_Estado1;
    int habitantes2, pt_Turistico2, cod_Estado2;

    float area1, pib1, densidade1, percapita1;
    float area2, pib2, densidade2, percapita2;


    printf("\n|-------------------CADASTRO----------------------|");
    printf("\n|----------------------DA-------------------------|");
    printf("\n|-------------------CARTA-01----------------------|\n");

    do { //FACA ENQUANTO...
        printf("\nInsira a letra da sua Cidade de A a H: ");
        scanf(" %c", &estado1);   
        
        // VERIFICA SE A ENTRADA ATENDE OS REQUISITOS.
        if (estado1 < 'A' || estado1 > 'H') { //VERIFICA SE A ENTRADA ESTA DENTRO OU FORA DO RANGE ENTRE A E H (ASCII).
            printf("\nLetra invalida. Use apenas A a H.\n");
        }
    } while (estado1 < 'A' || estado1 > 'H'); // CASO NÃO ATENDA, REPETE VOLTA AO INICIO, REPETE A PERGUNTA.

    do { //FACA ENQUANTO...
        printf("\nInsira o codigo 1, 2, 3 ou 4: ");
        scanf(" %d", &cod_Estado1);   

        // VERIFICA SE A ENTRADA ATENDE OS REQUISITOS.
        if (cod_Estado1 != 1 &&  cod_Estado1 != 2 && cod_Estado1 != 3 && cod_Estado1 != 4) { //VERIFICA SE A ENTRADA E DIFERENTE DE 1,2,3 OU 4.
            printf("\nValor invalido. Use apenas de 01 a 04...\n");
        }

    } while (cod_Estado1 != 1 &&  cod_Estado1 != 2 && cod_Estado1 != 3 && cod_Estado1 != 4); //VALIDAÇÃO DE ENTRADA DO USUÁRIO, CASO N ATENDA VOLTA AO INICIO.

    //ENTRADA DE DADOS DO USUARIO
    printf("\nInsira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("\nInsira o numero total de Habitantes: ");    
    scanf("%d", &habitantes1);

    printf("\nArea da cidade em quilometros quadrados: ");
    scanf("%f", &area1);

    printf("\nInsira o PIB (Produto Interno Bruto) de sua cidade: ");
    scanf("%f", &pib1);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pt_Turistico1);


    densidade1 = habitantes1/area1;
    percapita1 = pib1/habitantes1; 
  

    printf("\n|-------------------CADASTRO----------------------|");
    printf("\n|----------------------DA-------------------------|");
    printf("\n|-------------------CARTA-02----------------------|\n");
    
    //VALIDACAO DE ENTRADA DO USUARIO
    do {
        printf("\nInsira a letra da sua Cidade de A a H: ");
        scanf(" %c", &estado2);   

        if (estado2 < 'A' || estado2 > 'H') {
            printf("\nLetra invalida. Use apenas A a H.\n");
        }
    } while (estado2 < 'A' || estado2 > 'H');

   
   
    //VALIDACAO DE ENTRADA DO USUARIO
    do {
        printf("\nInsira o codigo 1, 2, 3 ou 4: ");
        scanf(" %d", &cod_Estado2);   

        if (cod_Estado2 != 1 &&  cod_Estado2 != 2 && cod_Estado2 != 3 && cod_Estado2 != 4) {
            printf("\nValor invalido. Use apenas de 01 a 04...\n");
        }

    } while (cod_Estado2 != 1 &&  cod_Estado2 != 2 && cod_Estado2 != 3 && cod_Estado2 != 4); 
       

    //ENTRADA DE DADOS DO USUARIO
    printf("\nInsira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("\nInsira o numero total de Habitantes: ");    
    scanf("%d", &habitantes2);

    printf("\nArea da cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    printf("\nInsira o PIB (Produto Interno Bruto) de sua cidade: ");
    scanf("%f", &pib2);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pt_Turistico2);

    densidade2 = habitantes2/area2;
    percapita2 = pib2/habitantes2;

    //IMPRESSAO DO RESULTADO
    printf("\n|---------------------------------------------------|");
    printf("\n|----------------------RESULTADO--------------------|");
    printf("\n|---------------------------------------------------|\n");
    printf("\nCarta: 1" );  
    printf("\nEstado: %c", estado1);  
    printf("\nCodigo da carta: %c0%d", estado1,cod_Estado1);  
    printf("\nNome da cidade: %s", cidade1);
    printf("\nPopulacao: %d", habitantes1);
    printf("\nArea: %.2f kM2",  area1);
    printf("\nPIB: %.2f bilhoes de reais", pib1);
    printf("\nNumero de Pontos turisticos: %d", pt_Turistico1);
    printf("\nDensidade Populacional %.2f hab/km2", densidade1);
    printf("\nPIB per Capita R$ %.2f reais",percapita1 );
    printf("\n\n"); 

    printf("\nCarta: 2" );  
    printf("\nEstado: %c", estado2);  
    printf("\nCodigo da carta: %c0%d", estado2,cod_Estado2);  
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulacao: %d", habitantes2);
    printf("\nArea: %.2f kM2",  area2);
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nNumero de Pontos turisticos: %d", pt_Turistico2);
    printf("\nDensidade Populacional %.2f hab/km2", densidade2);
    printf("\nPIB per Capita R$ %.2f reais",percapita2 );
    printf("\n\n"); 

       
    return 0;
}