/*Write a program to calculate the interest depends upon the user input. If the user gives 'S' as choice, it 
should calculate the simple interest, else the user give 'C' as choice, it should calculate the compound 
interest. otherwise it should display some error message.

Simple Interest : PNR/100 
Compound Interest : P(1+R/100)^N-P
P - Principla amount N - Number of years R - Rate of Interest

Input Format
The first line should get the principal amount 
Second line should get rate of interest 
Third line should get number of years 
Fourth line should get the choice either 'S' or 'C'

Constraints
NIL

Output Format
print the interest amount

Sample Input 0
10000
12
3
S

Sample Output 0
3600.00
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float P, R, I;
    int N;
    char choice;
    scanf("%f%f%d", &P, &R, &N);
    scanf(" %c", &choice);
    if(choice == 'S')
    {
        I = (P * R * N) / 100;
    }
    else if(choice == 'C')
    {
        I = P * pow(1 + R / 100, N) - P;
    }
    else
    {
        printf("Invalid Choice! Please enter 'S' or 'C' for simple or compound interest calculation.\n");
        return 1;
    }
    printf("%0.2f\n", I);
    return 0;
}