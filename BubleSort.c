#include <stdio.h>
#include <stdlib.h>

#define DIM 5


void caricavett(int v[], int n){
    int k;
    for(k=0;k<n;k++){
        printf("inserisci nella cella[%d]", k);
        scanf("%d", &v[k]);
    }
    printf("\n");
}


void stampavett(char stringa[],int v[], int n){
    int k;
    printf("%s", stringa);
    for(k=0;k<n;k++){
        printf("%d", v[k]);
    }
    printf("\n");
}

void bubblesortcrescente(int v[], int n) {
    int i,k;
    int temp;
    for(i = 0; i<n-1; i++) {
        for(k = 0; k<n-1-i; k++) {
            if(v[k] > v[k+1]) {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            }
        }
    }
}

void bubblesortdecrescente(int v[], int n) {
    int i,k;
    int temp;
    for(i = 0; i<n-1; i++) {
        for(k = 0; k<n-1-i; k++) {
            if(v[k] < v[k+1]) {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            }
        }
    }
}


int main(){
    int vet[DIM];
    caricavett(vet, DIM);
    stampavett(vet, DIM);

    bubblesortcrescente(vet, DIM);
    stampavett(vet, DIM);

}