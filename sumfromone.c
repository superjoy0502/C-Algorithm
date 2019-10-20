#include <stdio.h>

int main(){
    int SUM = 0;
    int VALUE = 1;
    int N;

    printf("Please enter a number: ");
    scanf("%d", &N);

    // printf("Start");

    while(VALUE <= N){
        SUM = SUM + VALUE;
        VALUE++;
        // printf("%d", VALUE);
    }

    printf("SUM = %d", SUM);

    return 0;
}