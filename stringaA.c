#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int main(){
    int k;
    int c=0;
    char frase[DIM];
    printf("Inserire una frase: ");
    scanf("%s", &frase);

    for(k=0;k<DIM;k++){
        if(frase[k]=='A'){
            c++;
            printf("trovata A\n");
        }
    }
    printf("in tuto ci sono %d", c);
    printf("\n");

    system("pause");
}