//Operators - Treasure Hunter

//Though there have been more successful pirates, Blackbeard is one of the best-known and widely feared of his time. He commanded four ships and had a pirate army of 300 at the height of his career and defeated the famous warship, HMS “Scarborough” in a sea battle. He was known for barreling into the battle clutching two swords with several knives and pistols at the ready. He captured over forty merchant ships in the Caribbean and without flinching killed many prisoners. Now, Blackbeard and his three pirates found a treasure of gold coins. Long Ben too joined them. They decided to share the treasure. Blackbeard agreed to give x% share for Long Ben. He then decided to take y% share from the remaining treasure. His other pirates will share the remaining gold coins equally. Write a program to compute their shares. After sharing the gold coins in this manner, if there are any leftover coins they decided to throw them into the sea.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int total_coins, ben_percentage, blackbeard_percentage;
    scanf("%d %d %d", &total_coins, &ben_percentage, &blackbeard_percentage);
    
    int ben_share = (total_coins * ben_percentage) / 100;
    int rem_tot_coins =  total_coins - ben_share;
    int blackbeard_share = (rem_tot_coins * blackbeard_percentage) / 100;
    int remaining_coins = total_coins - ben_share - blackbeard_share;

    int other_pirates_share = remaining_coins / 3;

    printf("%d\n", ben_share);
    printf("%d\n", blackbeard_share);
    printf("%d\n", other_pirates_share);
    
    return 0;
}



