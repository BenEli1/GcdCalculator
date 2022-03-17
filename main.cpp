#include <iostream>
#include "gcdCalculator.cpp"
using namespace std;
#include<windows.h>

int main() {
    long long result=0, a=0, b=0, dec=2;
    cout << "Welcome,\nPress 1 in order to compute GCD between 2 numbers\nPress 0 in order to terminate the program" << endl;
    cin >> dec;
    while (dec == 1) {
try {
    cout << "please enter the first number" << endl;
    scanf("%lld",&a);
    if (a > LONG_LONG_MAX)
        throw 0;
    if (a < 0)
        throw 0;
    cout << "please enter the second number" << endl;
    scanf("%lld",&b);
    if (b > LONG_LONG_MAX)
        throw 0;
    if (b < 0)
        throw 0;
}
catch(int){
    cout << "Overflow/Underflow Error!\n"<<endl;
    Sleep(500);
    return 0;
}
    result = GCDCalc(a, b);
    cout << "\nThe GCD between the 2 numbers is : " << result << endl;
    Sleep(500);
    cout << "\nPress 1 in order to compute GCD between 2 numbers\nPress 0 in order to terminate the program" << endl;
    cin >> dec;
}
    cout << "\nGoodbye!" << endl;
    Sleep(1000);

return 0;
}
