
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 10

int main(){
    char parola[DIM];
    char pali[DIM];
    int k, cnt, cntp;
    int i=0;
    printf("inserire una parola: ");
    scanf("%s", &parola);

    while(parola[i] != '\0'){
        cntp++;
    }

    for(k=DIM-1;k>=0;k--){
        pali[k]=parola[k];
        if(pali[k]==parola[k]){
            cnt++;
        }
    }
    
    if(cnt=cntp){
        printf("la parola e' palindroma");
    }else{
        printf("la parola non e' palindroma");
    }

}