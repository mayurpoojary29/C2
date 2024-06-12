//Operators - Hop n Hop

//Peter Rabbit lives in a colony. He is the only rabbit in his colony who is not able to hop. On his 5th birthday, his father Rabbit gifted him a pogo stick as he could not jump like the other rabbits. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friend and decides to go using his pogo stick. Write a program to find the number of hops needed to reach his friends' house (x,y). Assume that Peter Rabbit's house is in the coordinates (3,4).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int startX = 3;
    int startY = 4;
    
    int hops = abs(x - startX) + abs(y - startY);
    
    printf("%d\n", hops);
    
    return 0;
}


