#include<stdio.h>

int main(){
    int n,a=0;
    scanf("%d",&n);
    int A[n];
    for(int i= 0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max=-1;
    for (int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            a=A[j]-A[k];
            if (a<=0){
                a=-1*a;
            }
            if (a>max){
                max=a;
            }
        }
    }
    printf("%d",max);
    return 0;

}