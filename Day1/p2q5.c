//Operators - Dollars & Cents

//Kamal was traveling from Korea to USA and he was not aware of the currency system of USA. Can you please help him to add two dollars and cents?

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


