/*
Name: Likhon Sorkar
Date: 10-10-2024
Topic: Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
*/
#include <stdio.h>

int main() {
    int n,sum;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
       scanf("%d",&a[i]); 
    }
    for(int i=0; i<n; i++){
       sum += a[i]; 
    }
    if(sum<0){
       sum *=-1;
       printf("%d",sum);
    }else{
      printf("%d",sum);  
    }
    

    return 0;
}