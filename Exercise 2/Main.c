#include <stdio.h>

/*

Jalen White 
W#0453163
Date: 01/14/2025

*/

int main() {

float r = 4.5;
printf("r is  %f  \n" , r);
const double pi = (float) 22/7 ;
printf("pi is  %f  \n" , pi);
double circumference = 2 * pi * r ;
printf("circumference is  %.4f  \n" , circumference);
int IntCircumference2 = (int) 2 * pi * r;
printf("IntCircumference2 is  %d  \n" , IntCircumference2);
int IntCircumference = (int)circumference;
printf("IntCircumference is  %d  \n" , IntCircumference);
double PlanckConst= 6.626e-34;
printf("PlanckConst is  %e  \n" , PlanckConst);

}
