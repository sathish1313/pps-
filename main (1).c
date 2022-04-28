/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{    
int billamt,amtgiven;
int q,r;
scanf("%d",&amtgiven);
scanf("%d",&billamt);
q=amtgiven/billamt;
r=amtgiven%billamt;
printf("Quotient:%d\nRemainder:%d",q,r);
return 0;
}