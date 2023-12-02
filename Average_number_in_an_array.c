#include<stdio.h>
void main(){
    int arr[] = {12,10,50,95,65,43,49};
    int i,x,y,average;
    int sum = 0;
    for (size_t i = 0; i < 7; i++)
    {
        sum = sum + arr[i];
    }
        average = sum / 7 ;
    printf("The average of the array is : %d",average);
}