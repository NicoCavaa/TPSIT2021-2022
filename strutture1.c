/*Es 1: inserimento ordinato.
si scriva un programma che definisca un tipo di dato studente. Ogni studente è caratterizzato da un nome , cognome e una matricola.
acquisisca dati di 10 studenti e per ogni nuovo studente inserito , proceda ad un inserimento ordinato
stampi i dati degli studenti*/

#include <stdlib.h>
#include <stdio.h>

#define DIM 10
#define MAX_STR 20
#define MAX_NUM_EL 4

typedef char stringa[MAX_STR]

typedef struct{
    stringa nome;
    stringa cognome;
    int matricola;
}studente;

int main(){
    studente[MAX_NUM_EL];
    studente tmp;
    int i;
    int j;
    int numEL;
    

    for(numEL=0;numEL<MAX_NUM_EL;numEL++){
        printf("\ninserire dati\n");

        printf("inserisci nome");
        scanf("%s", &tmp.nome);
        printf("inserisci cognome");
        scanf("%s", &tmp.cognome);
        printf("inserisci nome");
        scanf("%s", &tmp.matricola);

        printf("\n dati acquisiti\n");

        if(numEL==0){
            a[0] = tmp;
        }else{
            i=0;
            while(i<numEL && a[i].matricola<tmp.matricola){

                i++;
                j=numEL;
            }
            while(j>i){

                a[j]=a[j-1];
                j--;

            }

            a[i]=tmp;

        }
    }
    for(i=0;i<MAX_NUM_EL;i++){
        printf("%d\n", a[i].matricola);
    }
}