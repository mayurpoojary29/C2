//Operators - Debt Repay

//Leena wanted to start a business and she was looking for a venture capitalist. Through her friend, she met a construction company owner Meena, who was interested in investing in an emerging business. Looking at the business proposal, the owner was very much impressed with Leena's work. So she decided to invest in Leena's business and hence gave a green signal to go ahead with the project. Leena got a loan of Rs. X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be returned by Leena to the owner. The owner was impressed by the proper repayment of the financed amount and decides to give a special offer of a 2% discount on the total interest at the end of the settlement. Find the discount amount and also find the total amount given back by Leena.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float principal, rate, years;
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &years);
    
    float interest = principal * (rate / 100) * years;
    float amount = principal + interest;
    float discount = interest / 50;
    float final_settlement = amount - discount;
    
    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final_settlement);
    
    return 0;
}

}
