#include <stdio.h>
int main()

{
float d = 1.2;
float e = 3.6;
float * ptrtod = &d;
float * ptrtoe = &e;
float temp = *ptrod;
*ptrod = e;
*ptroe = temp;
printf("The address of d is %d\n"), &d);
printf("The value of d is %f\n"), d);
printf("The address of e is %d\n"), &e);
printf("The value of d is %f\n"), e);
}
