/*
Name: Likhon Sorkar
Date: 10-08-2024
Topic: Even number print
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n>1){
        for(int i=1;i<=n;i++){
            if (i%2 == 0)
            {
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}