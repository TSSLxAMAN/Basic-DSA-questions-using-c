#include<stdio.h>
#include<string.h>
void main(){
    int x,y,i;
    char size[32];
    printf("Enter the number : ");
    scanf("%s",&size);
    for (size_t i = 0; i < strlen(size) / 2; i++)
    {
        if (size[i] == size[strlen(size) - i - 1])
        {
            x = 1;
        }
        else{
            x = 0;
        }
    }
    if (x == 1)
    {
        printf("Yes, it is a palindrome");
    }
    else{
        printf("No, it is not a palindrome");

    } 
}