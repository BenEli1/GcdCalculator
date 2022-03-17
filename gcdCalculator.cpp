#include "gcdCalculator.h"
#include <iostream>
using namespace std;
static long long GCDCalc(long long a,long long b){
    int bigger=myMax(a,b);
    int smaller=myMin(a,b);
    while(bigger>0 && smaller>0){
        return GCDCalc(bigger%smaller,smaller);
    }
    if(bigger>0)
        return bigger;
    return smaller;
}

