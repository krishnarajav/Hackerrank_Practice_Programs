/*One programming language has the following keywords that cannot be used as identifiers:

break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

Write a program to find if the given word is a keyword or not

Input Format
Input a string as keyword

Constraints
Maximum size of the string should be 20

Output Format
Print the output in STDOUT as string

Sample Input 0
break

Sample Output 0
break is a keyword

Sample Input 1
aasaij

Sample Output 1
aasaij is not a keyword
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[16][10] = {"break", "case", "continue", "default", "defer", "else","for", 
    "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    char input[20];
    int flag = 0;
    scanf("%s",input);
    for(int i = 0; i<16;i++){
        if(strcmp(input,str[i]) == 0){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("%s is a keyword",input);
    }
    else{
        printf("%s is not a keyword",input);
    }
    return 0;
}  