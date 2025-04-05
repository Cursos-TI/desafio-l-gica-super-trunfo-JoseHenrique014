#include <stdio.h>

int main() {
    char estado1[10] = "PARÁ";
    char codigo1[10] = "A01";
    char cidade1[10] = "Belém";
    int populacao1 = 1303403;
    float area1 = 1064.918;
    float PIB1 = 33467126000; 
    int Pturisticos1 = 23;
    float densidade1 = populacao1 / area1;
    float PIB_per_Capita1 = PIB1 / populacao1;
   
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Códico: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de Habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f de Reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
    

    char estado2[10] = "AMAZONAS";
    char codigo2[10] = "B02";
    char cidade2[10] = "Manaus";
    int populacao2 = 2434640;
    float area2 = 11.401;
    float PIB2 = 103281000000;
    int Pturisticos2 = 11;
    float densidade2 = populacao2 / area2;
    float PIB_per_Capita2 = PIB2 / populacao2;
    
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f de Reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
   
    printf("** VAMOS JOGAR **\n");
    printf("ATRIBUTO POPULAÇÃO:\n");
    printf("Carta 1 - Belém (PA): 1303403\n");
    printf("Carta 2 - Manaus (AM): 2434640\n");
    if(populacao1 > populacao2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Manaus Venceu!\n");
    }
    printf("ATRIBUTO ÁREA:\n");
    printf("Carta 1 - Belém (PA): 1064.918 km²\n");
    printf("Carta 2 - Manaus (AM): 11.401 km²\n");
    if(area1 > area2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Amazonas Venceu!\n");
    }
    printf("ATRIBUTO PIB:\n");
    printf("Carta 1 - Belém (PA): 33467126000\n");
    printf("Carta 2 - Manaus (AM): 103281000000\n");
    if(PIB1 > PIB2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Amazonas Venceu!\n");
    }
    printf("ATRIBUTO PONTOS TURÍSTICOS:\n");
    printf("Carta 1 - Belém (PA): 23\n");
    printf("Carta 2 - Manaus (AM): 11\n");
    if(Pturisticos1 > Pturisticos2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Amazonas Venceu!\n");
    }
    printf("ATRIBUTO DENSIDADE POPULACIONAL:\n");
    printf("Carta 1 - Belém (PA): 213546.19 hab/km²\n");
    printf("Carta 2 - Manaus (AM): 1223.95 hab/km²\n");
    if(densidade1 < densidade2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Amazonas Venceu!\n");
    }
    printf("ATRIBUTO PIB PER CAPITA:\n");
    printf("Carta 1 - Belém (PA): 25676.73 reais\n");
    printf("Carta 2 - Manaus (AM): 42421.47 reais\n");
    if(PIB_per_Capita1 > PIB_per_Capita2){
        printf("Resultado: CARTA 1 - Belém Venceu!\n");
    } else{
        printf("Resultado: CARTA 2 - Amazonas Venceu!\n");
    }
    

}
