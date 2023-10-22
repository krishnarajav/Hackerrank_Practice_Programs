/*Write a program to check whether the given is prime or not

Prime number is a number which is divisable by one and itself.

Input Format
Get an input from the user

Constraints
N value should be in between 1 to 2^64 - 1

Output Format
It should print Yes or No

Sample Input 0
1

Sample Output 0
Neither prime nor Composite

Sample Input 1
17

Sample Output 1
Yes
*/

#include <stdio.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    if (N > 0)
    {
        if (N == 1)
            printf("Neither prime nor Composite");
        else if ( N > 3 && (N % 2 == 0 || N % 3 == 0))
            printf("No");
        else
        {
            for (int i = 5; i*i<=N;i+=6)
            {
                if (N % i == 0 || N % (i+2)==0)
                {
                    printf("No");
                    return 0;
                }
            }
        printf("Yes");
        }
    }
    return 0;
}
