/*Write a program to accept an input float value and print it rounded off to 2 decimals

Input Format
Input contains number with decimal values

Constraints
Nil

Output Format
Print the value

Sample Input
113.45678

Sample Output
113.46
*/

#include<stdio.h>
int main()
{
    double value;
    scanf("%lf", &value);
    printf("%.2lf", value);
    return 0;
}