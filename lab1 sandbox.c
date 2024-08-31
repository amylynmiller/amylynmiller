// Amylyn Miller
// COP 3233-0V05
// September 1, 2024
// Interact with the user via the terminal, collect age, height, grade then display back to user. 

#include <stdio.h>

// Initializing variables
int years = 0;
int inches = 0;
int class = 0;

// Function to collect height
int height()
{ 
    printf("What is your height in inches?");
    scanf("%d", &inches);
    return inches;
}

// Function to collect age
int age()
{
    printf("What is your age in years?");
    scanf("%d", &years);
    return years;
}

// Function to collect grade
int grade()
{
    printf("What grade are you, in numbers?");
    scanf("%d", &class);
    return class;
}

int main()
{
    int inches = height();
    int years = age();
    int class = grade();

    printf("You are %d inches tall, %d years old, and in %d grade.", inches, years, class);
}