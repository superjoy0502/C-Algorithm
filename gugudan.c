#include <stdio.h>

int main(){
    int i;
    int j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            printf("%d",i*j);
            if(i*j < 10){
                printf("   ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}