#include <stdio.h>

int main(void){
    int A,B,C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    printf("%d\n", A+B-C);
    int k=A,b=B;
    while(B>0){
        k=k*10;
        B=B/10;
    }
    k=k+b-C;
    printf("%d",k);
    return 0;
}