#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int A,B;
    for(int i=0;i<n;i++) {
        scanf("%d%d", &A,&B);
        printf("%d\n",A+B);
        }
        

    return 0;
}