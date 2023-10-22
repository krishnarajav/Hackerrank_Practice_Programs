/*Write a program to calculate Simple Interest

Simple interest is a quick and easy method of calculating the interest charge on a loan. Simple interest is determined 
by multiplying the daily interest rate by the principal by the number of days that elapse between payments.

KEY TAKEAWAYS 
Simple interest is calculated by multiplying the daily interest rate by the principal, by the number 
of days that elapse between payments. Simple interest benefits consumers who pay their loans on time or early 
each month. Auto loans and short-term personal loans are usually simple interest loans.

The Formula for Simple Interest Is
Simple Interest=PNR/100 where: P=principle R=interest rate N=number of days between payments

Input Format
Get values for principal amount in the first line rate of interest in the second line number of years in the third line

Constraints
All three inputs should be > 0

Output Format
print the calculated simple interest. The result should be rounded to two decimals.

Sample Input 0
10000
12
3

Sample Output 0
3600.00
*/

#include<stdio.h>
int main()
{
    double P, R, N, simple_interest;
    scanf("%lf%lf%lf", &P, &R, &N);
    if(P > 0 && R > 0 && N > 0)
    {
        simple_interest = (P * N * R) / 100;
        printf("%0.2lf", simple_interest);
    }
    return 0;
}