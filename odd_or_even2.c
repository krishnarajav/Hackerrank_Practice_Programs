/*Write a program to identify whether the given number is odd or even.

Input Format
Get an integer from STDIN

Constraints
1<=N<=2^63

Output Format
Print the result if the value within the range. otherwise print as 'Invalid Input'

Sample Input 0
10

Sample Output 0
Even
*/

#include<stdio.h>
#include<math.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    if(N >= 1 && N <= pow(2, 63))
    {
        if(N % 2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    else
        printf("Invalid Input");
    return 0;
}
