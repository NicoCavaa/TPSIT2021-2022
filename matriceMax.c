#include <stdio.h>
#include <stdlib.h>

int main() {
    int nr, nc, k;   // inizializzo tre variabili di tipo intero

    printf("inserisci numero righe: "); //chiedo di inserire il numero di righe
    scanf("%d", &nr);
    printf("\ninserisci numero colonne: ");//chiedo di inserire il numero di colonne
    scanf("%d", &nc);

    float **mat =(float**)malloc(nr*sizeof(float*));//inizio ad allocare in modo dinamico la matrice
    for(k = 0; k < nr; k++) {
        mat[k] = (float*)malloc(nc*sizeof(float));
    }

    for(int r = 0; r < nr; r++) { //carico nella matrice gli elementi uno ad uno
        for(int c = 0; c < nc; c++) {
            printf("inserisci in righe-colonne[%d][%d]: ", r,c);
            scanf("%f", &mat[r][c]);
        }
    }

    float max = 0;//trovo nella matrice il valore massimo in tutte le righe poi lo stampo
    for(int i=0; i<nr; i++){
        for(int j=0; j<nc; j++){
            if(mat[i][j]>max){ 
              max = mat[i][j];
            }    
        }
        printf("Massimo nella riga [%d]:%.2f\n",i, max);
        max=0; 
    }
    
    free(mat); //libero l'area allocata dalla matrice
}
