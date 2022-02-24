#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct nodo{
    char c;
    struct nodo * next;
}Nodo;

Nodo * formattaLista(){
    Nodo* head;
    if(MAX> 0){
        head=(Nodo*)malloc(sizeof(Nodo));
    }
    else{
        head=NULL;
    }
    Nodo * r=head;
    Nodo * c;
    for(int k=0; k< MAX; k++){
        printf("posizione %d numero: ", k+1);
        fflush(stdin);
        scanf("%c", &r->c);
        c=NULL;
        if(k<MAX-1)
        {
            c= (Nodo*)malloc(sizeof(Nodo));
        }
        r->next=c;
        r=c;
    }
    return head;
}

void print(Nodo * l){
    if(l!=NULL)
    {
        print(l->next);
        printf("%c\n", l->c);
    }
}

int main(){
    Nodo * head= formattaLista();
    printf("Stampa Inversa: \n");
    print(head);
    return 0;
}