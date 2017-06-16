#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double baseCost,total;
    int tip_percentage,tax_percentage;
    scanf("%lf%d%d",&baseCost,&tip_percentage,&tax_percentage);
    total = baseCost + (baseCost*tip_percentage)/100 + (baseCost*tax_percentage)/100 ;
    printf("The total meal cost is %0.0lf dollars.",round(total));
    return 0;}
