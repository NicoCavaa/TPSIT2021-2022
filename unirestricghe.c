#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 10

int main(){
    char str1[DIM];
    char str2[DIM];

    printf("inserire una prima frase: ");
    fflush(stdin);
    scanf("%s", &str1);
    printf("inserire una seconda frase: ");
    fflush(stdin);
    scanf("%s", &str2);


    int j;
    int i;

    for(i=0; (str1[i])!='\0'; i++){
        for(j=0; (str1[i]=str2[j])!='\0'; i++, j++){
            printf("%s",str1);
            return 0;
        }
    }
    system("pause");
    fflush(stdin);
}
