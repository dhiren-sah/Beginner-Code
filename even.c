// Write a program to find even number between 1- n number and also find thier sum
#include<stdio.h>
int main()
{
    int i, n, sum = 0, count = 0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("Even Numbers are : \n");
    for(i = 1; i < n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
            count++;
            sum += i;
        }
    }
    printf("\nTotal Number of Even Number are %d",count);
    printf("\nSum of the Even Number are %d",sum);
    return 0;
}