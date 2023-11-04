#include <stdio.h>

int main() {
  
int appleQuantity;
double applePrice;
float appleReview;
int appleReviewDisplay;
const char appleLocation = 'F';

applePrice = 1.49;
appleQuantity = 23;
appleReview = 82.5;

appleReviewDisplay = appleReview;

printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}