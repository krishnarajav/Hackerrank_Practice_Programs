/*Here is a simplified version of the Beaufort scale, which is used to estimate the wind force. Write a program receives an integer input, then displays the corresponding description. Speed Description Less than 1 Calm 1- 3 Light Air 4 - 27 Breeze 28 – 47 Gale 48 – 63 Storm Above 63 Hurricane

Input Format
The first line informs you the number of test cases. Each separate line has an integer value for which the program is to find the description of wind speed

Constraints
1 <= n1 <= 100

Output Format
Wind condition is Calm / Light Air / Breeze / Gale / Storm / Hurricane

Sample Input
20

Sample Output
Wind condition is Breeze
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    short int n1;
    scanf("%hd", &n1);
    if(n1<1)
    {
        printf("Wind condition is Calm");
        exit(0);
    }
    switch(n1)
    {
        default: exit(0);
        case 1 ...3:printf("Wind condition is Light Air"); break;
        case 4 ...27:  printf("Wind condition is Breeze"); break;
        case 28 ...47:  printf("Wind condition is Gale"); break;
        case 48 ...63:  printf("Wind condition is Storm"); break;
        case 64 ...100:  printf("Wind condition is Hurricane"); break;        
    }
    return 0;
}
