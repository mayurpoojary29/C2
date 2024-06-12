//Input & Output - Round Off
//Write a program to get a float value from the user and display it in the below-mentioned format.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    float input_value;
    int int_part, rounded_up, rounded_down;
    scanf("%f", &input_value);

    int_part = input_value;
    rounded_up = ceil(input_value);
    rounded_down = floor(input_value);

    printf("%d\n", int_part);
    printf("%d\n", rounded_up);
    printf("%d\n", rounded_down);

    return 0;
}



