#include <stdio.h>

    int main() {

        // Recebe os dados da Carta 1                     
        char estado1[50]; // Estado                             
        char codigo1[50]; // Código
        char cidade1[50]; // Cidade
        int populacao1;   // População
        float area1;      // Área (km²)
        float pib1;       // PIB (Produto Interno Bruto)
        int pontoturis1;  // Pontos Turísticos

        

                // Mensagem de Boas Vindas
        printf(" Olá!\nBem vindo ao Desafio Super Trunfo. Cadastre as informaçoes dos Estados.");

                // Dados ESTADO 1
        printf(" \n\nCARTA 1\nEscolha uma letra de 'A' a 'H' para representar o primeiro Estado.");
        printf(" \nDigite uma letra de 'A' a 'H': ");
        scanf("%s", estado1);

                // Dados Código 1
        printf(" \nCadastre um Codigo para o Estado, contendo a letra que representa o Estado que voce escolheu junto com uma numeraçao da sua escolha\nExemplo: 'A01', 'A1', 'A02' etc...");
        printf(" \nDigite um Codigo: ");
        scanf("%s", codigo1);

                // Dados Nome da Cidade 1
        printf(" \nEscolha uma Cidade deste Estado.");
        scanf("%s", cidade1);

                // Dados População 1
        printf(" \nDigite o numero de pessoas que vivem nesta cidade.");
        scanf("%d", &populacao1);

                // Dados da Área(km²) 1
        printf(" \nQual a area(em km²) desta cidade? ");
        scanf("%f", &area1);

                // Dados do PIB 1
        printf(" \nDigite o PIB (Produto Interno Bruto) desta cidade.");
        scanf("%f", &pib1);

                // Dados do Ponto Turístico 1
        printf(" \nDigite o numero de Ponto Turísticos desta cidade.");
        scanf("%d", &pontoturis1);



                // Mensagem de conclusão do Cadastro Carta 1
        printf(" \n\n\nParabéns!! Voce concluiu o cadastro da Carta 1");
        printf(" \nAgora vamos iniciar o cadastro da segunda carta.\n");


                
        
                // Recebe os dados da Carta 2                     
        char estado2[50]; // Estado                             
        char codigo2[50]; // Código
        char cidade2[50]; // Cidade
        int populacao2;   // População
        float area2;      // Área (km²)
        float pib2;       // PIB (Produto Interno Bruto)
        int pontoturis2;  // Pontos Turísticos    

        // Dados ESTADO 2
        printf(" \nCARTA 2\nEscolha uma letra de 'A' a 'H' para representar o segundo Estado.");
        printf(" \nLembre-se de escolhar uma letra diferente do primeiro Estado");
        printf(" \nDigite uma letra de 'A' a 'H': ");
        scanf("%1s", estado2);

                // Dados Código 2
        printf(" \nCadastre um Codigo para o Estado, contendo a letra que representa o Estado que voce escolheu junto com uma numeraçao da sua escolha\nExemplo: 'A01', 'A1', 'A02' etc...");
        printf(" \nDigite um Codigo: ");
        scanf("%6s", codigo2);

                // Dados Nome da Cidade 2
        printf(" \nEscolha uma Cidade deste Estado.");
        scanf("%50s", cidade2);

                // Dados População 2
        printf(" \nDigite o numero de pessoas que vivem nesta cidade.");
        scanf("%d", &populacao2);

                // Dados da Área(km²) 2
        printf(" \nQual a area(em km²) desta cidade? ");
        scanf("%f", &area2);

                // Dados do PIB 2
        printf(" \nDigite o PIB (Produto Interno Bruto) desta cidade.");
        scanf("%f", &pib2);

                // Dados do Ponto Turístico 2
        printf(" \nDigite o numero de Ponto Turísticos desta cidade.");
        scanf("%d", &pontoturis2);


                // Exibe a mensagem de finaização de cadastro
        printf("\n\nParabéns!! Voce concluiu as etapas de cadastro.");
        printf(" \nVamos aos resultados!!");



// Exibir os Dados das cidades

// Cidade 1 

printf("\n\n     CARTA 1     \n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populaçao: %d\n", populacao1);
printf("Area: %f km²\n", area1);
printf("PIB: %f $\n", pib1);
printf("Numero de Ponto Turistico: %d\n", pontoturis1);

// Cidade 2

printf("\n\n     CARTA 2     \n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populaçao: %d\n", populacao2);
printf("Area: %f km²\n", area2);
printf("PIB: %f $\n", pib2);
printf("Numero de Ponto Turistico: %d\n", pontoturis2);
        
        

        return 0;
    }