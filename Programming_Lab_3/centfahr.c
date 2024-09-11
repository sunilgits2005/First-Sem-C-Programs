#include<stdio.h>
float main()
 {
 float F;
 printf("Enter fahrenheit temperature:");
 scanf("%f", &F);
 float C = ((F-32)*5)/9;
 printf("Centigrade temperature: %f", C);
}
