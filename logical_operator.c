/*
Name: Likhon Sorkar
Date: 30-09-2024
Topic: Logical Operator
*/
//Header File
#include <stdio.h>
#include <stdbool.h>

//Main Function
int main(){
    
    int x=3, y = 6;
    printf("x=%d y=%d\n",x,y);
    bool result1 = x < 5 &&  x < 10;
    bool result2 = x < 5 || x < 4;
    bool result3 = !(x < 5 && x < 10);
    printf("if %d < 5 &&  %d < 10 Result is : %d \n",x,x,result1);
    printf("if %d < 5 ||  %d < 4 Result is : %d \n",x,x,result2);
    printf("if  !( %d < 5 &&  %d < 10) Result is : %d \n",x,x,result3);

    

return 0;
}

/*
    && 	AND	x < 5 &&  x < 10	Returns 1 if both statements are true	
    || 	OR	x < 5 || x < 4	Returns 1 if one of the statements is true	
    !	NOT	!(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1

*/