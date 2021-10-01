#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct{
    char nome[10];
    char cognome[10];
    int votomate;
    int votoita;
    int votoinfo;
}studente;

void media(int n){
    studente s[MAX];
    int k;
    for(k=0; k<n; k++){
        if(s->votoinfo>s->votoita && s->votoinfo>s->votomate){
            printf("la media piu alta e quella di info\n");
        }else{
            if(s->votoita>s->votoinfo && s->votoita>s->votomate){
                printf("la media piu alta e quella di ita\n");
            }else{
                if(s->votomate>s->votoinfo && s->votomate>s->votoita){
                    printf("la media piu alta e quella di mate");
                }
            }
        }
    }

}

int main(){
    studente s[MAX];
    int n;
    int i;

    do{
        printf("Inserisci il numero di alunni:");
        scanf("%d", &n);	 
	} while (n<1 || n>MAX);

    for(i=0; i<n; i++){
		printf("Inserisci il cognome dell'alunno:");
		scanf("%s", s[i].cognome);
		printf("Inserisci il nome dell'alunno:");
		scanf("%s", s[i].nome);
		printf("Inserisci il voto mate:");
		scanf("%d", &s[i].votomate);
        printf("Inserisci il voto ita:");
		scanf("%d", &s[i].votoita);
        printf("Inserisci il voto info:");
		scanf("%d", &s[i].votoinfo);
	}
    media(n);
    fflush(stdin);
    getchar();
}