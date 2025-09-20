#include <stdio.h>

    int main(){

        char cidade1[10], cidade2[10], cod1[10], cod2[10], nome1[50], nome2[50];
        int povo1, povo2, npt1, npt2, total; // NPT = Número de Pontos Turísticos
        float area1, area2, pib1, pib2, pibpc1, pibpc2, dp1, dp2; // PIBPC = PIB PER CAPTA E DP = DENSIDADE POPULACIONAL

        //Cadastro da Primeira Carta
        printf("*----------------------------------------------------------------------------------------------------*\n");
        printf("\n                                 Cadastro da  Primeira Carta\n");
        printf("\n*---------------------------------------------------------------------------------------------------*\n");
        
        
        printf("\nDigite uma letra para representar a cidade que deseja cadastrar:");
        scanf("%s", cidade1);

        printf("\nDigite um codigo da cidade:");
        scanf("%s", cod1);

        printf("\nDigite apenas o primeiro nome da cidade que deseja cadastrar:");
        scanf("%s", nome1);

        printf("\nDigite em numeros a populacao da cidade:");
        scanf("%d", &povo1);

        printf("\nDigite a area da cidade:");
        scanf("%f", &area1);

        printf("\nDigite o PIB da cidade: ");
        scanf("%f", &pib1);

        printf("\nDigite quantos pontos turisticos existem na cidade: ");
        scanf("%d", &npt1);

        //Quebra Para Cadastro da Segunda Carta
        printf("*----------------------------------------------------------------------------------------------------*\n");
        printf("\n                       Cadastro da  Segunda Carta\n");
        printf("\n*---------------------------------------------------------------------------------------------------*\n");
        //Cadastro da Segunda Carta

        printf("\nDigite uma letra para representar a cidade que deseja cadastrar: ");
        scanf("%s", cidade2);

        printf("\nDigite um codigo da cidade: ");
        scanf("%s", cod2);

        printf("\nDigite apenas o primeiro nome da cidade que deseja cadastrar: ");
        scanf("%s", nome2);

        printf("\nDigite em numeros a populacao da cidade: ");
        scanf("%d", &povo2);

        printf("\nDigite a area da cidade: ");
        scanf("%f", &area2);

        printf("\nDigite o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("\nDigite quantos pontos turisticos existem na cidade: ");
        scanf("%d", &npt2);

        //Exibição da Primeira Carta

        printf("*----------------------------------------------------------------------------------------------------*\n");
        printf("\n                                       Primeira Carta\n");
        printf("\n*--------------------------------------------------------------------------------------------------*\n");


        dp1=povo1/area1;
        pibpc1=pib1/povo1;

        printf("\n Carta1: \n ");
        printf("\n Estado: %s\n ", cidade1);
        printf("\n Código: %s\n ", cod1);
        printf("\n Nome da Cidade: %s\n ", nome1);
        printf("\n População: %d\n ", povo1);
        printf("\n Área: %.2fKm²\n ", area1);
        printf("\n PIB: R$%.2f\n ", pib1);
        printf("\n Número de Pontos Turisticos: %d\n ",npt1);
        printf("\n A Densidade Populacional Atual: %.2f\n", dp1);
        printf("\n O PIB per Capta da cidade atualmente: R$%.2f\n",pibpc1);

        //Exibição da Segunda Carta

        printf("*----------------------------------------------------------------------------------------------------*\n");
        printf("\n                                      Segunda Carta\n");
        printf("\n*--------------------------------------------------------------------------------------------------*\n");
        
        dp2=povo2/area2;
        pibpc2=pib2/povo2;

        
        printf("\n Estado: %s\n ", cidade2);
        printf("\n Código: %s\n ", cod2);
        printf("\n Nome da Cidade: %s\n ", nome2);
        printf("\n População: %d\n ", povo2);
        printf("\n Área: %.2fKm²\n ", area2);
        printf("\n PIB: R$%.2f\n ", pib2);
        printf("\n Número de Pontos Turisticos :%d\n ",npt2);
        printf("\n A Densidade Populacional Atual: %.2f\n", dp2);
        printf("\n O PIB per Capta da cidade atualmente: R$%.2f\n",pibpc2);

        return 0;

    }