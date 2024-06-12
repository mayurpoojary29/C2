//Operators - Fencing the Ground
//In Westeros, the fighting ground is rectangular in shape. The King of Westeros, Bran Stark decides to build a fence around the ground. In order to help the construction workers to build a straight fence, he planned to place a thick rope around the ground. He decided to buy a rope of length that exactly fits the boundary. He also wanted to cover the entire ground with a thick carpet during the rainy season. The carpet should also be bought in such a way that it exactly covers the entire ground. Being the three-eyed Raven, he was lost in his thoughts and requested your help. Can you please help King Bran by writing a program to find the exact length of the rope and the exact area of the carpet that is required?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int length, breadth;
    scanf("%d %d", &length, &breadth);

    int required_length = 2 * (length + breadth);
    int required_area = length * breadth;

    printf("The required length is %d m\n", required_length);
    printf("The required area of carpet is %d sqm\n", required_area);

    return 0;
}




