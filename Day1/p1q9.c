//Operators - The Newspaper Agency

//Each Saturday, The Herald sells 'a' copies of a special edition newspaper for Rs. b per copy. The cost to him for printing each newspaper is Rs. c. He pays a fixed cost of Rs.100 per Saturday for storage, delivery, and so on. He wants to calculate the profit which it obtains only on Saturdays. Can you please help him out by writing a program to compute the profit if a, b, and c are given?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    int profit = a * (b - c)-100;

    printf("%d\n", profit);
    
    return 0;
}
