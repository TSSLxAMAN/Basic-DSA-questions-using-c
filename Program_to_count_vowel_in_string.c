#include <stdio.h>
#include <string.h>

// Function to count vowels in a string
int check(char a[32]) {
    int i, n = 0;
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', '\0'}; // Added '\0' to make it a valid string

    for (i = 0; i < strlen(a); i++) {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (a[i] == vowels[j]) {
                n++;
                break; // Break out of the inner loop once a vowel is found
            }
        }
    }
    return n;
}

int main() { // Corrected the function name to main
    int num;
    char a[32];
    printf("Enter the string: ");
    scanf("%s", a); // Removed the '&' before 'a', as 'a' is already an array (pointer)

    num = check(a);
    printf("The number of vowels in the string is: %d\n", num);
    return 0; // Added a return statement to indicate successful execution
}
