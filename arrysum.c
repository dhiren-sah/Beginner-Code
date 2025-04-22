// Write a program to find the sum of given array 
#include<stdio.h>
int main()
{
    int arr[] = {9, 5, 1, 2, 8};
    int i, sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum is %d",sum);
    return 0;

}