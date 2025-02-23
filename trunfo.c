#include <stdio.h>
int main(){


    int escolha;

    // Variáveis carta 1.
   
    char  código1[20];
    char  nome1[20];
    float população1;
    float área1;
    float PIB1;
    char  número1[4];
    
    // Variáveis carta 2.
    
    char  número2[4]; 
    char  código2[20];
    char  nome2[20];
    float população2;
    float área2;
    float PIB2; 
   
   // Coleta os dados da carta 1.

    printf("Insira o nome da cidade 1: \n");
    scanf("%s", &nome1);
    
    printf("Insira a populaçao da cidade 1: \n");
    scanf("%e", &população1);
    
    printf("Insira a área da cidade 1: \n");
    scanf("%e", &área1);
    
    printf("Insira o PIB da cidade 1: \n");
    scanf("%e", &PIB1);
    
    printf("Insira o numero de pontos turísticos da cidade 1: \n");
    scanf("%s", &número1);

    printf("Insira o códgo da cidade *Ex: A1, A2, B1, B2: \n");
    scanf("%s", &código1); 

    // Mostra os valores das cartas 1.

    printf("Nome da cidade 1: %s\n", nome1);
    printf("População da cidade 1: %f\n", população1);
    printf("Área da cidade 1: %f\n", área1);
    printf("PIB cidade 1: %f\n", PIB1);
    printf("Pontos turísticos da cidade 1: %s\n", número1);
    printf("Códgo da cidade: %s\n", código1);

    // Coleta os dados da carta 2.
   
    printf("Insira o nome da cidade 2: \n");
    scanf("%s", &nome2);
    
    printf("Insira a populaçao da cidade 2: \n");
    scanf("%e", &população2);
    
    printf("Insira a área da cidade 2: \n");
    scanf("%e", &área2);
    
    printf("Insira o PIB da cidade 2: \n");
    scanf("%e", &PIB2);
    
    printf("Insira o numero de pontos turísticos da cidade 2: \n");
    scanf("%s", &número2);

    printf("Insira o códgo da cidade *Ex: A1, A2, B1, B2: \n");
    scanf("%s", &código2); 

    // Mostra os valores da cartas 2.

    printf("Nome da cidade 2: %s\n", nome2);
    printf("População da cidade 2: %f\n", população2);
    printf("Área da cidade 2: %f\n", área2);
    printf("PIB da cidade 2: %f\n", PIB2);
    printf("Pontos turísticos da cidade 2: %s\n", número2);
    printf("Códgo da cidade: %s\n", código2);
 
    //  Escolha de comparação das cartas.

    printf("*** Escolha qual atributo você deseja comparar ***\n");
    printf("1. População da cidade\n");
    printf("2. Área da cidade\n");
    printf("3. PIB da cidade\n");
    printf("4. Número de pontos turísticos\n");
     scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        if(população1 > população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
        }else if(população1 == população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
        }else{
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
        }
        break;
        
        case 2:
        if(área1 > área2){
            printf("Com base na comparação de área da cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
        }else if(área1 == área2){
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
        }else{
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
        } break;
        case 3:
        if(PIB1 > PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
        }else if(PIB1 == PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
        }else{
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
        }break;
        case 4:
        if(número1 > número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
        }else if(número1 == número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
        }else{
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
        } break;
    default:
        printf("Opção inválida.");
        break;
    }

 
 
 
 
 
 
 
 
 
 
 
    return 0;
}