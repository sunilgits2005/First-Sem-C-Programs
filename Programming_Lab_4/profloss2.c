#include<stdio.h>
#include<stdbool.h>
float main()
{
float bp, sp, mp, discount, amt;
bool b, b1;
printf("Enter the buying price: ");
scanf("%f", &bp);
printf("Enter the marked price: ");
scanf("%f", &mp);
printf("Enter the discount percentage: ");
scanf("%f", &discount);
float disc = (discount/100) * mp;
sp = mp - disc;
float profit = sp - bp;
float loss = bp - sp;
amt = ((profit + loss) + (profit - loss))/2;
b = (sp > bp);
b1 = (sp < bp);
printf("Profit: %i \n", b);
printf("Loss: %i \n", b1);
float am = (amt/bp)*100;
printf("Seller made = %.2f",am);
}

