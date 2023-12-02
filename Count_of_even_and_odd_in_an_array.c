#include<stdio.h>
void main(){
    int arr[] = {12,10,50,95,65,43,49};
    int i,x=0,y=0;
    for (i = 0; i < 7; i++)
    {
        if (arr[i]%2==0)
        {
            x++;      
        }
        else{
            y++;
        }        
    }
    printf("number of even number in this array is : %d\n",x);
    printf("number of odd number in this array is : %d",y);
     
}