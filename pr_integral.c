/*Write a program to print an integral value

Input Format
Input an integral value

Constraints
-2^63 <= num <= 2^63-1

Output Format
Print the Integral value

Sample Input
-9943115155

Sample Output
-9943115155
*/

#include<stdio.h>
int main()
{
     long long int num;
     scanf("%lld", &num);
     printf("%lld", num);
     return 0;
}