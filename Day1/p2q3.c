//Operators - 3 Psychos
//Mani, Arun, and Kumar were very close friends at school. They were very good in Mathematics and were the pets of Ranjani Ma'am. Mani, Arun, and Kumar live in the same locality and their gang was known as 3 - Psychos. A new student Logan joins their class and he wanted to be friends with the 3 - Psychos. Logan asked Arun about his home address. Arun wanted to test Logan's mathematical skills and hence told that his house is at the midpoint of the line joining Mani's house and Kumar's house. Logan was puzzled. Can you help Logan out? Given the coordinates of the 2 endpoints of a line (x1,y1) and (x2,y2). Write a program to find the midpoint of the line.

#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    float mid_x = (x1 + x2) / 2.0;
    float mid_y = (y1 + y2) / 2.0;

    printf("Arun's house is located at(%.1f,%.1f)\n", mid_x, mid_y);
    
    return 0;
}
