#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;      // Variable to store the user input
    int sum = 0; // Variable to store the sum, initialized to 0
    int i;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum from 1 to n
    for (i = 1; i <= n; i++) 
    {
        sum += i;
	}
    

    // Print the result
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
