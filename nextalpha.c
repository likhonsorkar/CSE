/*
Name: Likhon Sorkar
Date: 10-07-2024
Topic: C. Next Alphabet
*/
#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    
    if (ch == 'z')
    {
        ch = 'a';
    }else if(ch>='a' && ch<='y'){
        ch++;
    }else{
        printf("Invalid Input");
    }
    printf("%c",ch);
    return 0;
}