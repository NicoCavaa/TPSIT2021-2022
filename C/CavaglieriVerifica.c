#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main() {
    int nr; // inizializzo le variabili per le colonne e righe e una come contatore
    int nc;
    int k;   

    printf("numero righe: "); //chiedo all'utente il numero di righe
    scanf("%d", &nr);
    printf("\nnumero colonne: "); //chiedo all'utente il numero di colonne
    scanf("%d", &nc);

    float **mat =(float**)malloc(nr*sizeof(float*)); // alloco in maniera dinamica la matrice passando come primo valore le righe
    for(k = 0; k < nr; k++) {                        // inizio ciclo for dove all'interno gli passo il valore delle colonne
        mat[k] = (float*)malloc(nc*sizeof(float));
    }

    for(int r = 0; r < nr; r++) { //inizio a caricare i valori di righe e colonne uno ad uno grazie ad un for prima sulle righe e poi un altro sulle colonne
        for(int c = 0; c < nc; c++) {
            printf("inserisci in righe-colonne[%d][%d]: ", r,c); //qua l'utente inserisce il valore nella riga e colonna scritta
            scanf("%f", &mat[r][c]);
        }
    }

    float vett[DIM];
    float min = DIM;
    int x=0;
    for(int i=0; i<nr; i++){ // trovo il valore minimo in ogni riga
        for(int z=0; z<nc; z++){
            if(mat[i][z]<min){ 
              min = mat[i][z];// assegno a min il valore di quella riga più piccolo
            }    
        }
        printf("Minimo nella riga [%d]:%.2f\n",i, min);//stampo il valore più piccolo
        vett[x]=min;//assegno alla cella x il valore più piccolo
        x++;//incremento la cella del vettore
        min=DIM;
    }
    printf("vettore piu piccoli: %f", vett);
    

    free(mat); // libero lo spazio allocato in memoria dalla matrice


    /*

    per allocare un arrey in maniera dinamica

    float* vett(float *)malloc(DIM *sizeof(float));

    free(vett) libero poi lo spazio allocato dal vettore

    */
}