#include<calc.h>

/**
 * @brief funtion to perform power
 * @switch(Calc_oprn)
 * @return test_value
 */

test_values  power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}