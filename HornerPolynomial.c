/*We assume that we have a polynomial with 5 arguments (N variable)
The coefficients of this polynomial are in T array {1,-2,2,3,-5}.
So the polynomial is T = x^4-2x^3+2x^2+3x-5.
The program prompts the user to give a value to variable x (e.g. r=7) to compute
the division between T and x-r.
Prints the coefficients of the quotient polynomial and the remainder.*/

#include <stdio.h>
#define N 5

main(){
    double T[]={1,-2,2,3,-5}; /* x^4-2x^3+2x^2+3x-5*/
    double R[N-1];
    double r; /*value to variable x*/
    double P; /* the remainder */
    int i;

    printf("Give a value to x variable: ");
    scanf("%lf",&r);

    P=T[0];
    R[0]=T[0];
    for(i=1;i<N;i++)
    {
        P=P*r+T[i];
        R[i]=P;
    }

    printf("\nRemainder = %f\n",P);
    printf("\n The coefficients of the quotient are:\n");

    for(i=0;i<N-1;i++)
        printf(" %f",R[i]);
    printf("\n");
}
