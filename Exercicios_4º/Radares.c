#include<stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double TempoA, TempoB;
    double velocidade,tempo_total;

    TempoA = tA / 3600;
    TempoB = tB / 3600;
    
    tempo_total= TempoB - TempoA;

    velocidade = (distancia/tempo_total);
    return(velocidade);
}

int levouMulta(int tA, int tB,double distancia, double velocidadeMaxima){
    double velocidade = calculaVelocidadeMedia(tA,tB,distancia);
    if(velocidade > velocidadeMaxima){
        return 1;
    }
    else{
        return 0;
    }
}

// int main(){
//     //variaveis
//     int HA, HB;
//     double percusso,velocidade;
//     //entrada
//     printf("tempo A:");
//     scanf("%d",&HA);
//     printf("tempo B:");
//     scanf("%d",&HB);
//     printf("Distancia:");
//     scanf("%lf",&percusso);
//     //processamento
//     velocidade = calculaVelocidadeMedia(HA,HB,percusso);
//     //saida
//     printf("%.3lf",velocidade);
// }