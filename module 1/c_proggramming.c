/*
Name: Likhon Sorkar
Date: 29-09-2024
Topic: Show input and output
*/
//Header File
#include <stdio.h>

//Main Function
int main(){
    int num;
    float float_num;
    char character;
    printf("Please Input All:\n");

    printf("Input A number: ");
    scanf("%d", &num);
    printf("\nInput A Float number: ");
    scanf("%f", &float_num);
    printf("\nInput A Character: ");
    scanf("%c",&character);

    printf("\nThe number is : %d , Float number is: %f , Character is %c", num,float_num,character);

}

/*
Formate Specifier
shor int %hd
int %d
long int %ld
long long %lld
char %c
float %f
double %lf
long double %Lf

*/