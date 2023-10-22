/*Write a program that inputs a student's marks and prints his grade according to the following rules :

Marks Grade 76 - 100 A 51 - 75 B 26 - 50 C 0 - 25 D

Input Format
Get single input from the user

Constraints
score should be in between 1 to 100

Output Format
Display equivalent grade

Sample Input
40

Sample Output 
C
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    short int marks;
    scanf("%hd", &marks);
    if(marks==0)
    {
        printf("D");
        exit(0);
    }
    if(marks>=1&&marks<=100)
    {
        if(marks>=76&&marks<=100)
        {
            printf("A");
            exit(0);
        }
        else if(marks>=51&&marks<=75)
        {
            printf("B");
            exit(0);
        }
        else if(marks>=26&&marks<=50)
        {
            printf("C");
            exit(0);
        }
        else if(marks>0&&marks<=25)
        {
            printf("D");
            exit(0);
        }
    }
}