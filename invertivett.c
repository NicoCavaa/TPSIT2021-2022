#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void inverti(int v[], int dim){
    int x;
    int v2[MAX];
    printf("Invertito: ");
    for(x=dim-1;x>=0;x--){
        v2[x]=v[x];
        printf("%d", v2[x]);
    }
    printf("\n");
}

int main(){
    int v[]={1,2,3,4,5,6,7,8,9};
    int i;
    inverti(v,9);
    printf("Originale: ");
    for(i=0;i<9;i++){
        printf("%d", v[i]);
    }
    printf("\n");
    system("pause");
}