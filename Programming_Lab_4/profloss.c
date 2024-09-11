#include <stdio.h>
int main()
{
float b, m, discount, s, profit, loss, amt;
printf("Enter the buying price: ");
scanf("%f", &b);
printf("Enter the marked price: ");
scanf("%f", &m);
printf("Enter the discount amount: ");
scanf("%f", &discount);
s = m - discount;
profit = s - b;
loss = b - s;
amt = (((profit + (-loss)) + profit - (-loss)))/2;
printf("Lost or Profit amount is: %f", amt);
}

