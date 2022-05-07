#include <stdio.h>

int main()

{

    int x,y;

    printf("Enter the first number: ");

    scanf("%d",&x);

    printf("\nEnter the second number: ");

    scanf("%d",&y);

    printf("Before Swapping: X = %d and Y = %d", x,y);

    // Logic to swap

    x = x + y; 

    y = x - y; 

    x = x - y; 

    printf("After Swapping: X = %d, Y = %d", x, y);

    return 0;

}
