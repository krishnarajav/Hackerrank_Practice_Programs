/*Write a program to calculate the sum and average of four numbers.
Sum is addition of four values Average is sum of values divided by number of values
Note : Round off sum and average with one decimal point

Input Format
Get four numbers from the users

Constraints
1<=num<10^7

Output Format
print the sum in the first line and average in the second line

Sample Input
1 2 3 4

Sample Output
Sum = 10.0
Average = 2.5
*/

#include<stdio.h>
int main()
{
    float num1, num2, num3, num4, sum, average;
    scanf("%f\t%f\t%f\t%f\t", &num1, &num2, &num3, &num4);
    sum = num1+num2+num3+num4;
    average = sum/4;
    printf("Sum = %0.1f\n", sum);
    printf("Average = %0.1f", average);
    return 0;
}
