/*
Name: Likhon Sorkar
Date: 30-09-2024
Topic: Arithmatic Operator
*/
//Header File
#include <stdio.h>

//Main Function
int main(){
    int num1, num2;
    printf("Enter Num1: ");
    scanf("%d",&num1);
    printf("\nEnter Num2: ");
    scanf("%d",&num2);
    int add,sub,multi,div,inc,dec;
    printf("\nArithmatic Operator Operation below: \n");
    printf("Addiction: Num1 + Num2 = %d \n", num1+num2);
    printf("Subtraction: Num1 - Num2 = %d \n", num1-num2);
    printf("Multiplication: Num1 * Num2 = %d \n", num1*num2);
    printf("Divission: Num1 / Num2 = %d \n", num1/num2);
    printf("Modulus: Num1 Modulus Num2 = %d \n", num1%num2);

return 0;
}

/*
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
*/