/*
Author :- Amar Shindhe
Date :- 14/jan/2021
Place :- Mysore
*/

//Problem statement
// Write a program to Find a given number is even or odd withought using Modulo operator

#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    if((num&1)==0)
    {
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd\n",num);
    }
    return 0;
}
