#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeno = 100000;
    int *primestorage = malloc(sizeof(int)*primeno);
    int x = 2;
    for(int i = 1 ; i < primeno; i++){
        primestorage[i]=0;
    }
    primestorage[0]=x;
    while(primestorage[primeno-1]==0){
        for(int i = 0;; i++){
            if(primestorage[i]==0){
                primestorage[i]=x;
                x++;
                break;
            }
            if(x%primestorage[i]==0){
                x++;
                break;
            }
        }
    }
    printf("%d",primestorage[primeno-1]);
    free(primestorage);
}
