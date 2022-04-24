/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float tractLand,tractLandAcred;

scanf("%f",&tractLand);

tractLandAcred=(float)tractLand/43560;

printf("%.2f sq.ft is equal to %.2f acres",tractLand,tractLandAcred);

    return 0;
}
