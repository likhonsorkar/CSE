/*
Name: Likhon Sorkar
Date: 10-10-2024
Topic: Pattern 1
Pattern: 
1
12
123
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}