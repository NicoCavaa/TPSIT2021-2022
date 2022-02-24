#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNG 50
#define DIM 30

typedef struct {
    char num[LUNG];
    char titFilm[DIM];
    char genere[DIM];
    char annoUscita[DIM];
    char dispo[DIM];
} Cinema;

void caricaVett(Cinema v[], int n, char nomeFilm[]) {
    FILE *fp;
    int c=0;
    char line[100];

    fp = fopen(nomeFilm, "r");

    for(int i = 0;i < n; i++){
        fgets(line, 100, fp);
        char* pezzo = strtok(line, ",");

        while(pezzo != NULL){
            switch(c){
                case 0:
                    strcpy(v[i].num, pezzo);
                    break;
                case 1:
                    strcpy(v[i].titFilm, pezzo);
                    break;
                case 2:
                    strcpy(v[i].genere, pezzo);
                    break;
                case 3:
                    strcpy(v[i].annoUscita, pezzo);
                    break;
                case 4:
                    strcpy(v[i].dispo, pezzo);
                    break;
            }
            c++;
            pezzo = strtok(NULL, ",");
        }
        c=0;
    }
}

void stampVett(Cinema v[], int n){
    for(int k = 0;k < n;k++){
        printf("%s\t%30s\t%30s\t%10s\t%20s", v[k].num, v[k].titFilm, v[k].genere, v[k].annoUscita, v[k].dispo);
    }
}

int riga(){
    fstream file;
    string s;
    fopen("listafilm.csv","r"); 
    int contarighe=0;
        while(fopen()!=NULL){
            getline(file,s,'\n');
            contarighe++;
        }
    return contarighe-1; 
}

int main() {
    int n;
    film = malloc(n*sizeof(Cinema));
    Cinema film[DIM];
    riga();
    caricaVett(film,DIM, "listafilm.csv");
    stampVett(film, DIM);
    free(film);
    return 0;
    fflush(stdin);
    getchar();
}

while(fgets(line, 100, fp)){
    pezzo =strtok(line, ",");
    (v+i)->numero = atoi(prezzo);

    pezzo = strtok(NULL, ",");
    strcy((v+i)->nome, prezzo);

    pezzo = strtok(NULL, ",");
    strcy((v+i)->categoria, prezzo);

    pezzo = strtok(NULL, ",");
    strcy((v+i)->anno, prezzo);

    pezzo = strtok(NULL, ",");
    strcy((v+i)->stato, prezzo);
}

