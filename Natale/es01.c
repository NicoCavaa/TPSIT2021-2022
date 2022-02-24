#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int testa;
int Pila[MAX];

void Push(){
    int n;
    int nn;
    printf("Quanti numeri vuoi inserire?: ");
    scanf("%d", &nn);
    for(int j=0;j<=nn;j++){
        if(testa==nn){
            printf("\nPila piena");
        }else{
            printf("\nInserisci un numero: ");
            scanf("%d", &n);
            Pila[testa++]=n;
        }
    }
}

void Print(){
    int x=0;
    int Soste[MAX];
    int i;
    if(testa==0){
        printf("\nPila vuota");
    }else{
        for(i=testa-1;i>=0;i--){
            if(Pila[i]%2!=0){
                Soste[x]=Pila[i];
                Pila[--testa];
            }
            printf("\nelemento: %d", Pila[i]);
            printf("\ndispari: %d", Soste[x]);

        }
    }

	int z;
    for(z=testa-1;z>=0;z--){
        printf("\n%d", Pila[z]);	
    }
    int y;
    for(y=testa-1;y>=0;y--){
        printf("\n%d", Soste[y]);	
    }
}

int main(){
    Push();
    Print();

}