#include <stdio.h>

int main(void){
    int n;
    char str[100];
    scanf("%d", &n);
    scanf("%s", str);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+str[i]-'0';
    }
    printf("%d",sum);
    return 0;
}