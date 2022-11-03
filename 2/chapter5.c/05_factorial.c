#include <stdio.h>
// factorial(n)= n*n-1*n-2*n-3*4*3*2*1
// factorial(n)= 5*4*3*2*1
// factorial(1)=1
// factorial(0)=1
// factorial(n)= n*n-1*n-2*n-3*4*3*2*1
// factorial(n)= n*(n-1*n-2*n-3*4*3*2*1)
// factorial(n)= n*factorial(n-1)
int factorial(int);

int main()
{
    printf("The value of factorial 4 is %d", factorial(4));
    return 0;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
// First of all 'C' takes 4 as the value of n and since 4 is not equal to either 1 or 0 'if' function is not going to work rather 'return n * factorial(n - 1)' will work & perform the following operations.
// Dry run of factorial 4
// factorial(4)
// 4*factorial(3)
// 4*3*factorial(2)
// 4*3*2*factorial(1)
// Since the factorial of 1 is 1  and it meets the condition of 'if' function, if function will operate and prints 1: as a result following execution is done
//  4*3*2*1
// 24
//  and finally the program will calculte and it'll hault.
