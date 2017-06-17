#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double baseCost,total;
    int tip_percentage,tax_percentage;
    cin>>baseCost>>tip_percentage>>tax_percentage;
    total = baseCost + (baseCost*tip_percentage)/100 + (baseCost*tax_percentage)/100 ;
    cout<<"The total meal cost is "<<round(total)<<" dollars.";
    return 0;
}
