/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() 
{
 long long n;
 int count = 0;
 printf("Enter an integer: ");
 scanf("%lld", &n);
 while (n != 0) {
 n /= 10; // n = n/10
 ++count;
 }
 printf("Number of digits: %d", count);
 return 0;
}
