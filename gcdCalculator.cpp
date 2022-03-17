#include "gcdCalculator.h"
#include <iostream>
using namespace std;
static long long GCDCalc(long long a,long long b){
    int bigger=myMax(a,b);
    int smaller=myMin(a,b);
    if(bigger==0)
        return smaller;
    if(smaller==0)
        return bigger;
    return GCDCalc(bigger%smaller,smaller);
}



