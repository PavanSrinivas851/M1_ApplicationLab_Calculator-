#include<calc.h>

/**
 * @brief funtion to perform Addition
 * @switch(Calc_oprn)
 * @return test_value
 */

test_values addition()
{
     int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}