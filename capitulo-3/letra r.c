// Contabilização de votos
#include <stdio.h>
#include <math.h>

int main() {
    
    float VA, VB, VC, NL, BR, votos_validos, N_eleitores, PVV, PVA, PVB, PVC, PNL,PBR;
    char porcentagem;

    printf("Digite a quantidade de votos recebida pelo candidato A: ");
    scanf("%f", &VA);
    
    printf("Digite a quantidade de votos recebida pelo candidato B: ");
    scanf("%f", &VB);
    
    printf("Digite a quantidade de votos recebida pelo candidato C: ");
    scanf("%f", &VC);
    
    printf("Digite a quantidade de votos nulos: ");
    scanf("%f", &NL);
    
    printf("Digite a quantidade de votos brancos: ");
    scanf("%f", &BR);
    
    N_eleitores = VA + VB + VC + NL + BR;
    votos_validos = VA + VB + VC;
    PVV = (votos_validos / N_eleitores) * 100; //Percentual de votos válidos em relação ao número total de eleitores.
    PVA = (VA / N_eleitores) * 100; // Percentual de votos válidos do candidato A em relação a quantidade total de eleitores.
    PVB = (VB / N_eleitores) * 100; // Percentual de votos válidos do candidato B em relação a quantidade total de eleitores
    PVC = (VC / N_eleitores) * 100; // Percentual de votos válidos do candidato C em relação a quantidade total de eleitores
    PNL = (NL / N_eleitores) * 100; // Percentual de votos nulos em relação a quantidade total de eleitores
    PBR = (BR / N_eleitores) * 100; // Percentual de votos brancos em relação a quantidade total de eleitores
    porcentagem = '%';

    printf("\nO numero total de eleitores e de %g", N_eleitores);
    printf("\nO percentual de votos validos em relacao ao numero total de eleitores e de %.2f%c", PVV, porcentagem);
    printf("\nO percentual de votos validos do candidato A em relacaoo a quantidade total de eleitores e de %.2f%c", PVA, porcentagem); 
    printf("\nO percentual de votos validos do candidato B em relacao a quantidade total de eleitores e de %.2f%c", PVB, porcentagem);
    printf("\nO percentual de votos validos do candidato C em relacao a quantidade total de eleitores e de %.2f%c", PVC, porcentagem); 
    printf("\nO percentual de votos nulos em relacao a quantidade total de eleitores e de %.2f%c", PNL, porcentagem); 
    printf("\nO percentual de votos brancos em relacao a quantidade total de eleitores e de %.2f%c", PBR, porcentagem);
    
    return 0;
}