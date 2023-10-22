/*Write a program to print sum two values. Get two values from the user and print the sum.

Input Format
Input value contains two numbers

Constraints
NIL

Output Format
Print the sum of two values like x + y = sum

Sample Input
10 20

Sample Output
10.0 + 20.0 = 30.0
*/

#include <stdio.h>
int main() 
{
    float x, y, sum;
    scanf("%f%f", &x, &y);
    sum = x+y;
    printf("%0.1f + %0.1f = %0.1f", x, y, sum);
    return 0;
}