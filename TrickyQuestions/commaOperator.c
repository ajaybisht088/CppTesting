#include<stdio.h>
void main(){
    int a = 20, b, c;
    // b = a++, a--, ++a, a++;  // This equation is like this ==> (b = a++), a--, ++a, a++;
    b = (a++, a--, ++a, a++);   // and this equation executes from left to right and assigned 
                                // values from right most operand and rest all rejected/truncated
    printf("a  = %d, b = %d", a, b);
    printf("\na  =  %d", a);
    getch();
}
// OUTPUT EXPLAINED ==>
/*
First of all Comma Operator have the lowest priority in the prescedence table.
In the Expression " b = (a++, a--, ++a, a++); " , in this brackets have the highest 
priority So the experssion evaluates within the brackets from left to right and then 
assigned the values from the right most operand and rest all rejected.
NOTE - Using Brackets Comma got priority over Equalto assignment operator.  
*/