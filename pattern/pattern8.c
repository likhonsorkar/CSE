/*
Name: Likhon Sorkar
Date: 10-10-2024
Topic: Pattern 1
Pattern: 
#
# #
# # #
# # # #
# # # # #
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n<=26 && n>0)
        {
            for(int i = 1; i<=n ; i++){
            for (int j = 1 ; j<=i; j++){
                printf("# ");
            }
            printf("\n");
        }
    }else{
        printf("Wrong Range. Alphabet Range is 1-26.");
    }
    
}
