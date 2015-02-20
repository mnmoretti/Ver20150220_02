#include <stdio.h>
#include <stdlib.h>

const int N=6;

int main(int argc, char** argv) {
    int vet[N];
    int i;
    int numeroMaggiorenni;
    int presidenti;
    int max;
    float media;
    int min;

    i=1;
    while(i<=6) {
    printf("Inserisci l' eta' della %da persona: ", i);
    scanf("%d", &vet[i-1]);   
    i=i+1;
    }
    i=0;
    numeroMaggiorenni=0;
    while(i<=6) {
        if(vet[i-1]>17) {
            numeroMaggiorenni=numeroMaggiorenni+1;
        }
        i=i+1;
    }
    i=0;
    numeroMaggiorenni=0;
    while(i<=6) {
        if(vet[i-1]>50) {
            presidenti=presidenti+1;
        }
        i=i+1;
    }
    i=0;
    while(i<=6) {
        if(vet[i-1]>vet[i]) {
            max=vet[i-1];
        }
        i=i+1;
    }
    i=0;
    while(i<=6) {
        media=vet[i]+vet[i+1];
        i=i+1;
        }
    media=media/6;
    i=0;
    while(i<=6) {
        if(vet[i-1]<vet[i])
            min=vet[i-1];
        i=i+1;
    }
            
    printf("Eta' media: %f", media);
    printf("Eta' massima: %d", max);
    printf("Eta' minima: %d", min);
    printf("I maggiorenni sono: %d", numeroMaggiorenni);
    printf("Numero di potenziali Presidenti della Reppubblica: %d", presidenti);
    
    return (0);
}
