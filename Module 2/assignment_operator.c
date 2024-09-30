/*
Name: Likhon Sorkar
Date: 30-09-2024
Topic: Assignment Operator & increment decrement operator
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
    //Assignment Operator
    int x = num1;
    int y = num2;
    printf("x += 3 : Now x = %d\n",x += 3);
    printf("x -= 3 : Now x = %d\n",x -= 3);
    printf("x *= 3 : Now x = %d\n",x *= 3);
    printf("x /= 3 : Now x = %d\n",x /= 3);
    printf("x Mod= 3 : Now x = %d\n",x %= 3);

    // Increament Decrement Operator
    printf("Increment: ++Num1 = %d \n", ++num1);
    printf("Decrement: --Num2 = %d \n", --num2);

return 0;
}

/*
=	x = 5	x = 5	
+=	x += 3	x = x + 3	
-=	x -= 3	x = x - 3	
*=	x *= 3	x = x * 3	
/=	x /= 3	x = x / 3	
%=	x %= 3	x = x % 3	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x
*/