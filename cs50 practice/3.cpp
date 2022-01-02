#include<stdio.h>
#include<iostream>
#include<conio.h>
int main()
{
    int i,j;
    char ch='A';
    for (i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
    {
       std::cout<<ch;
       ch++;
    }
    std::cout<<("\n");
    }
return 0;
}
