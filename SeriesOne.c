#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n/2;i++){
        printf("%d ",i*2);
        printf("%d ",i);
    }
    return 0;
}
