#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int N,M;
    scanf("%d%d",&N,&M);
    int s[N-1];
    for(int i=0;i<N;i++) {
        scanf("%d",&s[i]);
    }
    int sum=0,j=N;
    bubbleSort(s,N-1);
    for(int i=N-1;i>=0;i--) {
        sum=s[0]+s[1]+s[i];
        if(sum<=M){
            j=i+1;
            break;
        }
    }

    int a,b,c;
    int sum1=0,sum2=1;
    for (a=j-1;a>1;a--){
        for (b=a-1;b>0;b--){
            for(c=b-1;c>=0;c--){
                sum2=s[a]+s[b]+s[c];
                if(sum2<=M){
                    break;
                }
            }
            if(sum1<sum2&&sum2<=M){
                sum1=sum2;
            }
        }
    }

    printf("%d",sum1);

    return 0;
}