/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int t;
long i=0;
unsigned int count=0;
char * c;
scanf("%d",&t);
c=(char *)malloc(sizeof(char)*(100002));
while(t--)
{
scanf("%s",c);
for(i=0; *(c+i); i++)
{
if(c[i]==c[i+1])
{
count++;
}
}
printf("%u\n",count);
count=0;
}
return 0;
}
