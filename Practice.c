#include<stdio.h>
#include<string.h>

int main(){

    char str[90];
    scanf("%s",str);
    int i,j,count=0,word,len;
    len=strlen(str);
    word=len/3;
    for(i=0;i<word;i++){
        for(j=i*3;j<(i*3)+3;j++){
            if(j%3==0 || j%3==2){
                if(str[j]!='S')
                    count++;
            }
            if(j%3==1){
                if(str[j]!='O')
                    count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
